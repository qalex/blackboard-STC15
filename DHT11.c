#include"sys.h"
#include"delay.h"

#define MAX_CYCLES 10000
#define DHT P35 // DHT11

u8 DHT_TP_H = 0,
   DHT_TP_L = 0,
   DHT_RH_H = 0,
   DHT_RH_L = 0,
   DHT_CR_D = 0;

u8 read_byte(u8 *byte) {
    unsigned char i, t;
    u16 __data cycles = 0;

    *byte = 0;

    for (i = 0; i < 8; i++) {
        cycles = 0;
        while (!DHT)
            if (cycles ++ > MAX_CYCLES) return 3;

        t = 0;
        while (DHT) {
            delay_5us(1);
            if (t++ > 100) return 4;
        }

        if (t > 5)
            *byte = ((*byte << 1) + 1);
        else
            *byte <<= 1;
    }

    return 0;
}

u8 readDHT(void)
{
    u16 cycles = 0;
    u8 val = 0;

    DHT = 0;
    Delay2(30);
    DHT = 1;
    delay_5us(10);

    cycles = 0;
    while (!DHT)
        if (cycles++ > MAX_CYCLES) return 1;

    cycles = 0;
    while (DHT)
        if (cycles++ > MAX_CYCLES) return 2;

    val = read_byte(&DHT_RH_H);
    if (val) return (val | 0x10);
    val = read_byte(&DHT_RH_L);
    if (val) return (val | 0x20);

    val = read_byte(&DHT_TP_H);
    if (val) return (val | 0x30);
    val = read_byte(&DHT_TP_L);
    if (val) return (val | 0x40);
    val = read_byte(&DHT_CR_D);
    if (val) return (val | 0x50);

    return 0;
}
