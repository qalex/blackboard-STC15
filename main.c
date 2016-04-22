
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


unsigned int  __xdata holdingRegs[TOTAL_REGS_SIZE]; // function 3 and 16 register array

void main(void) {
    u8 i = 0;
    u8 err = 0;
    u16 lux = 0;

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
    // Read the Buttons
        holdingRegs[BUTTON1] = K1;
        holdingRegs[BUTTON2] = K3;  
    // Write the Digitals     
        if (holdingRegs[BEEPER]) BEEP = 1; 
          else BEEP = 0;   
        if (holdingRegs[RELAY]) DK1 = 1; 
          else DK1 = 0;
          
    // Write the PWM LEDS    
        set_pwm((unsigned char)holdingRegs[LEDG],(unsigned char)holdingRegs[LEDG],(unsigned char)holdingRegs[LEDG]);

        // Service the modbus request if it is there
        holdingRegs[TOTAL_ERRORS] = modbus_update(holdingRegs);
    }
}

