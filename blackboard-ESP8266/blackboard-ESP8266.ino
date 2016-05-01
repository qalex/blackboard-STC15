#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include "SSID.h" // contains the local SSID and PASSWORD

// Simplemodbusng 
#include "SimpleModbusMaster.h"
#include "protocol.h"

#define BUFFER_SIZE 128

#define BAUD 115200
#define TIMEOUT 1000
#define POLLING 200
#define RETRY_COUNT 10 

// used to toggle the receive/transmit pin on the driver
#define TxEnablePin 1

Packet packets[2]; // 2 packets, 0 reads all registers, 1 write writable (starting at LEDR
unsigned int regs[TOTAL_REGS_SIZE];
unsigned int con_status = 0;

const char* ssid = SSID;          // #defined in SSID.h modified for each network
const char* password = PASSWORD;  // 

ESP8266WebServer server(80);

const int led = 13;

void handleRoot() {
  String response = "Registers:\n";
  
  for ( int i = 0; i < TOTAL_REGS_SIZE; i++ ) {
    response = response + i + ": " + regs[i] + "\n";
  }
  server.send(200, "text/plain", response);
}

void handleNotFound(){
  digitalWrite(led, 1);
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET)?"GET":"POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i=0; i<server.args(); i++){
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
  digitalWrite(led, 0);
}

void setup(void){
  pinMode(led, OUTPUT);
  digitalWrite(led, 0);
  // Serial.begin(115200);
  WiFi.begin(ssid, password);
  // Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    // Serial.print(".");
  }
  // Serial.println("");
  // Serial.print("Connected to ");
  // Serial.println(ssid);
  //Serial.print("IP address: ");
  //Serial.println(WiFi.localIP());

  if (MDNS.begin("esp8266")) {
    // Serial.println("MDNS responder started");
  }

  server.on("/", handleRoot);

  server.on("/status", [](){
    String status;
    for ( int i = 0; i < 2; i++) {
      status = status + i + "id: " + packets[i].id + ".\n";
      status = status + i + " function: " + packets[i].function + ".\n";
      status = status + i +  " address: " + packets[i].address + ".\n";
      status = status + i +  " no_of_registers: " + packets[i].no_of_registers + ".\n"; 

  
      // modbus information counters
      status = status + i +  " requests: " + packets[i].requests + ".\n";
      status = status + i +  " successful_requests: " + packets[i].successful_requests + ".\n";
      status = status + i +  " total_errors: " + packets[i].total_errors + ".\n";
      status = status + i +  " retries: " + packets[i].retries + ".\n";
      status = status + i +  " timeout: " + packets[i].timeout + ".\n";
      status = status + i +  " incorrect_id_returned: " + packets[i].incorrect_id_returned + ".\n";
      status = status + i +  " incorrect_function_returned: " + packets[i].incorrect_function_returned + ".\n";
      status = status + i +  " incorrect_bytes_returned: " + packets[i].incorrect_bytes_returned + ".\n";
      status = status + i +  " checksum_failed: " + packets[i].checksum_failed + ".\n";
      status = status + i +  " buffer_errors: " + packets[i].buffer_errors + ".\n";
  
      // modbus specific exception counters
      status = status + i +  " illegal_function: " + packets[0].illegal_function + ".\n";
      status = status + i +  " illegal_data_address: " + packets[0].illegal_data_address + ".\n";
      status = status + i +  " illegal_data_value: " + packets[0].illegal_data_value + ".\n";
      status = status + i +  " misc_exceptions: " + packets[0].misc_exceptions + ".\n";
  
      // connection status of packet
      status = status + i +  " connection: " + packets[0].connection + ".\n"; 
    }
    server.send(200, "text/plain", status);
  });

  server.on("/relayon", [](){
    regs[RELAY] = 1;
    server.send(200, "text/plain", "Relay Energised\n" );
  });
  
  server.on("/relayoff", [](){
    regs[RELAY] = 0;
    server.send(200, "text/plain", "Relay De-energised\n" );
  });
  server.on("/beepon", [](){
    regs[BEEPER] = 1;
    server.send(200, "text/plain", "Beeper Energised\n" );
  });
  server.on("/beepoff", [](){
    regs[BEEPER] = 0;
    server.send(200, "text/plain", "Beeper De-energised\n" );
  });
  
  server.onNotFound(handleNotFound);

  server.begin();
  // Serial.println("HTTP server started");

  // read all registers starting at address 0
  packets[0].id = 1;
  packets[0].function = READ_HOLDING_REGISTERS;
  packets[0].address = 0;
  packets[0].no_of_registers = LEDR; // First writable register
  packets[0].register_array = regs;
    // write the last registers to the 8051 starting at address LEDR
  packets[1].id = 1;
  packets[1].function = PRESET_MULTIPLE_REGISTERS;
  packets[1].address = LEDR;
  packets[1].no_of_registers = TOTAL_REGS_SIZE - LEDR;
  packets[1].register_array = &regs[LEDR];
  modbus_configure(BAUD, TIMEOUT, POLLING, RETRY_COUNT, TxEnablePin, packets, 2);
}

void loop(void){
  con_status = modbus_update(packets);
  server.handleClient();
}


