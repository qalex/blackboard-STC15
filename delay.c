#include"delay.h"
#include "sys.h"

void delay_5us(unsigned char __data us) {
    unsigned char __data i;
    for (; us; us--)
        for (i=13; i; i--);
}

void Delay2(unsigned long cnt) {
    for (; cnt; cnt--) {
        delay_5us(200);
    }
}
