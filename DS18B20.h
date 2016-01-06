/*
 * DS18B20.h
 *
 *  Created on: Dec 30, 2015
 *      Author: alex
 */

#ifndef DS18B20_H_
#define DS18B20_H_

#define DATA_SIZE 9
extern unsigned char DS18B20_data[DATA_SIZE];

u8 DS18B20_readTemp(void);
float DS18B20_decodeTemp();

#endif /* DS18B20_H_ */
