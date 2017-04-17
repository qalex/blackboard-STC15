/*
 * i2c.c
 *
 *  Created on: Jan 2, 2016
 *      Author: alex
 */

#include "sys.h"
#include "i2c.h"
#include "delay.h"

#define SETSDA(v)   SDA = v, delay_5us(1)
#define SETSCL(v)   SCL = v, delay_5us(1)

void I2CInit()
{
    SETSDA(1);
    SETSCL(1);
}

void I2CStart()
{
    SETSDA(0);
    SETSCL(0);
}

void I2CRestart()
{
    I2CInit();
    I2CStart();
}

void I2CStop()
{
    SETSCL(0);
    SETSDA(0);
    SETSCL(1);
    SETSDA(1);
}

void I2CAck()
{
    SETSDA(0);
    SETSCL(1);
    SETSCL(0);
    SETSDA(1);
}

void I2CNak()
{
    SETSDA(1);
    SETSCL(1);
    SETSCL(0);
    SETSDA(1);
}

unsigned char I2CSend(unsigned char Data)
{
     unsigned char i, ack_bit;
     for (i = 0; i < 8; i++) {
        if ((Data & 0x80) == 0)
            SETSDA(0);
        else
            SETSDA(1);
        SETSCL(1);
        SETSCL(0);
        Data<<=1;
     }
     SETSDA(1);
     SETSCL(1);
     ack_bit = SDA;
     SETSCL(0);
     return ack_bit;
}

unsigned char I2CRead()
{
    unsigned char i, Data=0;
    for (i = 0; i < 8; i++) {
        SETSCL(1);
        if(SDA)
            Data |=1;
        if(i<7)
            Data<<=1;
        SETSCL(0);
    }
    return Data;
}

