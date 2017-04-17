
#include "sys.h"
#include "protocol.h"
#include "delay.h"
#include "timer0.h"
#include "PWM3.h"

#include "serial.h"
#include "DHT11.h"
#include "DS18B20.h"
#include "BH1750.h"
#include "SimpleModbusSlave.h"
#include <stdio.h>

void tm0_isr() __interrupt (1) __using (1)
{
// empty placeholder
}

void putchar (char c) {
    serial_putc(c);
}

#define COUNT 25

unsigned int  __xdata holdingRegs[TOTAL_REGS_SIZE]; // function 3 and 16 register array

void main(void) {
    u8 i = 0;
    u8 err = 0;
    u16 lux = 0;
    u8 seconds = COUNT;

    PWM(1,1,1);
    timer0_ini();
    serial_init();

    init_BH1750();
      /* parameters(
                unsigned char ID, 
                unsigned char transmit enable pin, 
                unsigned int holding registers size)
                
     The transmit enable pin is used in half duplex communication to activate a MAX485 or similar
     to deactivate this mode use any value < 2 because 0 & 1 is reserved for Rx & Tx
  */
    set_pwm(0,0,0);
    
    modbus_configure(1, 2, TOTAL_REGS_SIZE);
// Power up the ESP8266    
    WIFI_VCC = 0;
    holdingRegs[WIFIPOWEROFF] = 0;
  
    while(1) {
    // Read the analogs
        holdingRegs[DHT_ERR] = readDHT();
        holdingRegs[TEMPH] = DHT_TP_H;
        holdingRegs[HUMIDH] = DHT_RH_H;
        holdingRegs[TEMPL] = DHT_TP_L;
        holdingRegs[HUMIDL] = DHT_RH_L;
        holdingRegs[DHTCHSUM] = DHT_CR_D;
    // Untested peripherals
        holdingRegs[DHT_ERR] = DS18B20_readTemp();
        holdingRegs[DS18B20T] = DS18B20_decodeTemp();
        holdingRegs[LUX] = read_BH1750();
    // Read the Buttons and latch - need to be unlatched by the modbus master
	      if (!K1)
        	holdingRegs[BUTTON1] = 1;
        
	      if (!K3)
        	holdingRegs[BUTTON2] = 1;  
        
    // Write the Digitals     
        if (holdingRegs[BEEPER]) BEEP = 1; 
          else BEEP = 0;   
        if (holdingRegs[RELAY]) DK1 = 1; 
          else DK1 = 0;
          
    // Write the PWM LEDS    
        set_pwm((unsigned char)holdingRegs[LEDR],(unsigned char)holdingRegs[LEDG],(unsigned char)holdingRegs[LEDB]);
        
    // Support for powering off the ESP8266 via modbus
        if (seconds >0) {
          seconds--;
          // holdingRegs[BEEPER] = 0;
        } else {
          // holdingRegs[BEEPER] = 1;
          seconds = COUNT;
             // Power off the ESP8266 when an integer (number of seconds) has been placed in the holding register 
          if (holdingRegs[WIFIPOWEROFF]) {
            WIFI_VCC = 1;
            holdingRegs[WIFIPOWEROFF]--;
          } else {
            WIFI_VCC = 0;    
          }
        }
 

        // Service the modbus request if it is there
        holdingRegs[TOTAL_ERRORS] = modbus_update(holdingRegs);
    }
}

