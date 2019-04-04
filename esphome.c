#include "sys.h"
#include "delay.h"
#include "timer0.h"
#include "PWM3.h"

#include "serial.h"
#include "DHT11.h"
#include "DS18B20.h"
#include "BH1750.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tm0_isr() __interrupt(1) __using(1){
// empty placeholder
}

void putchar(char c)
{
	if (c == '\n')
		putchar('\r');
	serial_putc(c);
}

void delay_mins(int min)
{
	while (min--)
		Delay2(60000);
}

unsigned int parse_char()
{
	char tmp[4];
	tmp[0]=serial_getc();
	tmp[1]=serial_getc();
	tmp[2]=serial_getc();
	tmp[3]=0;
	return atoi(tmp);	
}
#if 0
void nice_init()
{
	RF=0;
}

void nice_send_header()
{
	RF=1;
	Delay2(1500);
	RF=0;
	Delay2(1500);
}

void nice_send_one()
{
	RF=1;
	Delay2(1000);
	RF=0;
	Delay2(500);
}

void nice_send_zero()
{
	RF=1;
	Delay2(500);
	RF=0;
	Delay2(1000);
}

nice_xmit(int button, int reps)
{

}
#endif

void main(void)
{
	u8 err;
	u8 r, g, b;
	WIFI_VCC=0;
	DK1 = 0;
	timer0_ini();
	serial_init();
	r = 0;
	g = 0;
	b = 0;
	PWM(r, g, b);
	BEEP=0;
	printf("esphome stc slave. (c) Necromancer 2019\n");	
	Delay2(5000);
	S1_USE_P36P37();
	Delay2(5000);
	while (1) {
		int c = serial_getc();
		switch(c) {
			case 'h':
				readDHT();
				printf("%d.%d\n", DHT_RH_H, DHT_RH_L);
				break;
			case 't':
				readDHT();
				printf("%d.%d\n", DHT_TP_H, DHT_TP_L);				
				break;
			case 'S':
				DK1=1;
				break;
			case 's':
				DK1=0;
				break;
			case 'p':
				DK1=1;
				Delay2(250);
				DK1=0;
				break;
			case 'b':
				BEEP=1;
				Delay2(400);
				BEEP=0;
				break;
			case 'R':
				r = parse_char();
				PWM(r, b, g);				
				break;
			case 'G':
				g = parse_char();
				PWM(r, b, g);				
				break;
			case 'B':
				b = parse_char();
				PWM(r, b, g);				
				break;

		}	
	}
}
