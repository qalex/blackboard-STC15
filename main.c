
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
  
    modbus_configure(1, 2, TOTAL_REGS_SIZE);
  
    while(1) {
        err = readDHT();
        holdingRegs[HUMID] = DHT_TP_H;
        //if (err) {
        //    printf("ERR:%x\n", err);
        //} else {
        //    printf("T:%d H:%d CR:%d\n", DHT_TP_H, DHT_RH_H, DHT_CR_D);
        //}

        err = DS18B20_readTemp();
        holdingRegs[TEMP] = DS18B20_decodeTemp();
        //printf("%x: %f\n", err, DS18B20_decodeTemp());

        holdingRegs[LUX] = read_BH1750();
        // printf("%u lux\n", lux);

        //Delay2(1000);

//        //set_pwm(200*on,0,0);
          // BEEP = 0;
//        BEEP = 1;
//        DK1 = 1;


//        set_pwm(0,0,0);
//        Delay2(1000);
//        set_pwm(0,200,0);
//        Delay2(50);
//        set_pwm(200,0,0);
//        Delay2(100);
//        BEEP = 0;
//        DK1 = 0;


        
        if (holdingRegs[BEEPER]) BEEP = 1; 
          else BEEP = 0;
        
        if (holdingRegs[RELAY]) DK1 = 1; 
          else DK1 = 0;
        
        set_pwm(holdingRegs[LEDG],holdingRegs[LEDG],holdingRegs[LEDG]);
        holdingRegs[B1_STATE] = 0x00;
        holdingRegs[B2_STATE] = 0x01;
        // Service the modbus request if it is there
        holdingRegs[TOTAL_ERRORS] = modbus_update(holdingRegs);
    }
}

