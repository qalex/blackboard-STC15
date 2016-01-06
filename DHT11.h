/*
 * DHT11.h
 *
 *  Created on: Dec 28, 2015
 *      Author: alex
 */

#ifndef DHT11_H_
#define DHT11_H_

extern unsigned char DHT_TP_H;
extern unsigned char DHT_TP_L; // always 0 for DHT11
extern unsigned char DHT_RH_H;
extern unsigned char DHT_RH_L; // always 0 for DHT11
extern unsigned char DHT_CR_D;

unsigned char readDHT(void);

#endif /* DHT11_H_ */
