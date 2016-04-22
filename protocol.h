/* protocol.h defines the registers available in the betablack modbus implementation */ 
enum 
{     
  // just add or remove registers and your good to go...
  // The first register starts at address 0
  TEMP,
  TEMP_ERR,    
  HUMID,
  DHT_ERR,
  LUX,        
  LEDR,
  LEDG,
  LEDB,
  RELAY, 
  BEEPER, 
  B1_STATE,
  B2_STATE,
  TOTAL_ERRORS,
  // leave this one
  TOTAL_REGS_SIZE 
  // total number of registers for function 3 and 16 share the same register array
};

