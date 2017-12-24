#include "sys.h"
#include "delay.h"
#include "timer0.h"
#include "PWM3.h"

#include "serial.h"
#include "DHT11.h"
#include "DS18B20.h"
#include "BH1750.h"

#include <stdio.h>
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

#define BUFSIZE 32
void franken_wait_prompt()
{
	char prompt[] = "frankenstein > ";
	char tmp[BUFSIZE];
	int max = strlen(prompt);

	memset(tmp, 0, BUFSIZE);
	while (1) {
		int n = memcmp(prompt, tmp, max);
		if (!serial_avail())
			Delay2(500);
		if ((n != 0) || serial_avail()) {
			if (!serial_avail()) {
				putchar('\r');
			}
			tmp[max] = serial_getc();
			memmove(tmp, &tmp[1], max);
			continue;
		} 
		break;
	}
}

void franken_run_cmd(const char *cmd)
{
	franken_wait_prompt();
	printf("%s\r", cmd);
}

#define HUMIDITY    "'humidity' 'Humidity' '% r.F.'"
#define TEMPERATURE "'temperature' 'Temperature' 'C'"


void send_data()
{
	u8 err;
	PWM(255, 0, 0);
	WIFI_VCC=0;
	franken_run_cmd("senslog create " HUMIDITY);
	franken_run_cmd("senslog create " TEMPERATURE);
	franken_run_cmd("senslog register");
	PWM(255, 255, 0);
	err = readDHT();
	if (err) {
		//printf("ERR:%x\n", err);
	} else {
		PWM(255, 255, 255);
		franken_wait_prompt();
		printf("senslog set %s %d.%d", HUMIDITY, DHT_RH_H, DHT_RH_L);
		franken_wait_prompt();
		printf("senslog set %s %d.%d", TEMPERATURE, DHT_TP_H, DHT_TP_L);
		franken_wait_prompt();
		printf("senslog post");
		franken_wait_prompt();
	}
	WIFI_VCC=1;
	PWM(0, 0, 0);
}

void delay_mins(int min)
{
	while (min--)
		Delay2(60000);
}

void main(void)
{
	u8 i = 0;
	u8 err = 0;
	u16 lux = 0;

	/* Enables WIFI power. Switching wifi power will cause fuckup */
	WIFI_VCC=0;	
	DK1 = 0;
		
	timer0_ini();
	serial_init();
	PWM(0, 0, 0);
	Delay2(1500);
	
	S1_USE_P36P37();

	while (1) {
		send_data();
		delay_mins(15);
	}
}
