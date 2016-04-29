/* protocol.h defines the registers available in the betablack modbus implementation */ 
enum 
{     
  // just add or remove registers and your good to go...
  // The first register starts at address 0
  TEMPH,
  TEMPL,
  TEMP_ERR,    
  HUMIDH,
  HUMIDL,
  DHTCHSUM,
  DHT_ERR,
  DS18B20T,
  LUX,        
  LEDR,
  LEDG,
  LEDB,
  RELAY, 
  BEEPER, 
  BUTTON1,
  BUTTON2,
  WIFIPOWEROFF,
  TOTAL_ERRORS,
  // leave this one
  TOTAL_REGS_SIZE 
  // total number of registers for function 3 and 16 share the same register array
};

