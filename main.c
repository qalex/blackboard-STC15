
#include "sys.h"
#include "delay.h"
#include "timer0.h"
#include "PWM3.h"

#include "serial.h"
#include "DHT11.h"
#include "DS18B20.h"
#include "BH1750.h"

#include <stdio.h>

void tm0_isr() __interrupt (1) __using (1)
{
// empty placeholder
}

void putchar (char c) {
    serial_putc(c);
}

void main(void) {
    u8 i = 0;
    u8 err = 0;
    u16 lux = 0;

    PWM(1,1,1);
    timer0_ini();
    serial_init();

    init_BH1750();

    while(1) {
        err = readDHT();
        if (err) {
            printf("ERR:%x\n", err);
        } else {
            printf("T:%d H:%d CR:%d\n", DHT_TP_H, DHT_RH_H, DHT_CR_D);
        }

        err = DS18B20_readTemp();
        printf("%x: %f\n", err, DS18B20_decodeTemp());

        lux = read_BH1750();
        printf("%u lux\n", lux);

        Delay2(1000);

//        set_pwm(200*on,0,0);

//        BEEP = 1;
//        DK1 = 1;

//        Delay2(10000);
//        set_pwm(0,0,0);
//        Delay2(1000);
//        set_pwm(0,200,0);
//        Delay2(50);
//        set_pwm(200,0,0);
//        Delay2(100);
//        BEEP = 0;
//        DK1 = 0;

//        Delay2(500);
    }
}

