/*
 * DS18B20.c
 *
 *  Created on: Dec 30, 2015
 *      Author: alex
 */

#include "sys.h"

#include "DS18B20.h"

#include "delay.h"
#include <math.h>

unsigned char DS18B20_data[DATA_SIZE];

#define DQ P15

//Initialization function
u8 DS18B20_reset(void) {
    u8 x = 0;
    DQ = 1;         // Release
    delay_5us(5);   //Slight delay
    DQ = 0;         // drive bus low
    delay_5us(120); // wait 480us-960us delay
    DQ = 1;         // Release bus
    delay_5us(15);  // wait 70us
    x = DQ;         // 0 = device present, 1 = no device present
    delay_5us(20);  // delay 410us
    return x;
}

//Reading a byte
unsigned char ReadOneChar(void) {
    unsigned char i = 0;
    unsigned char dat = 0;
    for (i = 8; i > 0; i--) {
        DQ = 0;
        delay_5us(1);
        DQ = 1;
        delay_5us(2);

        dat >>= 1;
        if (DQ)
            dat |= 0x80;
        delay_5us(11);
    }
    return (dat);
}

//Write a byte
void WriteOneChar(unsigned char d) {
    unsigned char i = 0;
    for (i = 8; i > 0; i--) {
        if (d & 1) {
            DQ = 0;
            delay_5us(2);
            DQ = 1;
            delay_5us(10); 
        } else {
            DQ = 0;
            delay_5us(10);
            DQ = 1;
            delay_5us(2); 
        }
        d >>= 1;
    }
//    delay_5us(4);
}

//Read temperature
u8 DS18B20_readTemp(void)
{
    u8 x = 0,
            i;
    x |= DS18B20_reset();
    WriteOneChar(0xCC); // Skip read serial number column number of operations
    WriteOneChar(0x44); // Start temperature conversion
    x |= DS18B20_reset() << 4;
    WriteOneChar(0xCC); //Skip read serial number column number of operations
    WriteOneChar(0xBE); //Read the temperature register, etc. (a total of 9 registers readable) is the temperature of the first two

    for (i=0; i<DATA_SIZE; i++)
        DS18B20_data[i]=ReadOneChar();

    return x;
}

float DS18B20_decodeTemp() {
    float temp = 0;
    int i;
    for (i = 0; i < 8; i++) {
        temp += ((DS18B20_data[0] >> i)&0x01) * powf(2, i - 4);
    }
    for (i = 0; i < 3; i++) {
        temp = temp + ((DS18B20_data[1] >> i)&0x01) * powf(2, i + 4);
    }
    if ((DS18B20_data[1] >> 3)&0x01) {
        temp = -temp;
    }
    return temp;
}
