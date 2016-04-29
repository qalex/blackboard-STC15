/*
 * i2c.h
 *
 *  Created on: Jan 4, 2016
 *      Author: alex
 */

#ifndef I2C_H_
#define I2C_H_

/*
    // Write to slave device with
    // slave address e.g. say 0x20

    // Init i2c ports first
    I2CInit();
    // Send start condition
    I2CStart();
    // Send slave address
    ack = I2CSend(0x20);

     * ack == 1 => NAK
     * ack == 0 => ACK

    ack = I2CSend(0x07);
    // Send another data
    ack = I2CSend(0x10);
    // Send stop condition
    I2CStop();

    // Read from slave device with
    // slave address e.g. say 0x20

    // Init i2c ports first - Should be done once in main
    I2CInit();
    // Send start condition
    I2CStart();

    // Send slave address with Read bit set
    // So address is 0x20 | 1 = 0x21
    I2CSend(0x21);
    data = I2CRead();

    // Send ack
    I2CAck();
    // Read last byte
    data = I2CRead();

    // Send nak for last byte to indicate
    // End of transmission
    I2CNak();
    // Send stop condition
    I2CStop();
 */

#define SDA P11
#define SCL P10

void I2CInit();
void I2CStart();
void I2CRestart();
void I2CStop();
void I2CAck();
void I2CNak();
unsigned char I2CSend(unsigned char Data);
unsigned char I2CRead();

#endif /* I2C_H_ */
