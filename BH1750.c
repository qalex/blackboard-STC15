/*
 * BH1750.c
 *
 *  Created on: Jan 5, 2016
 *      Author: alex
 */

#include "sys.h"
#include "i2c.h"

#define BH1750_ADDR 0x23

void init_BH1750() {
    u8 ack;
    I2CInit();

    // Send start condition
    I2CStart();
    // Send slave address
    ack = I2CSend(BH1750_ADDR << 1);
//     ack == 1 => NAK
//     ack == 0 => ACK

    // send "Continuously H-Resolution Mode"
    ack = I2CSend(0x10);

    I2CStop();
}

u16 read_BH1750() {
    u16 val = 0;

    I2CStart();

    // Send slave address with Read bit set
    I2CSend(BH1750_ADDR << 1 | 1);

    val = I2CRead() << 8; // high byte
    I2CAck(); // Send ack

    val |= I2CRead(); // low byte

    // Send nak for last byte to indicate
    // End of transmission
    I2CNak();
    // Send stop condition
    I2CStop();

    return val / 1.2; // adjust value
}
