 
#ifndef __SYS_H__
#define __SYS_H__

typedef 	unsigned char	u8;
typedef 	unsigned int	u16;
typedef 	unsigned long	u32;

#include "STC15Fxxxx.h"
 /*************	���س�������	**************/
#define MAIN_Fosc		22118400L	//������ʱ��
#define MainFosc_KHZ   (MAIN_Fosc / 1000)

#define	RX1_Lenth		32			//���ڽ��ջ��峤��
#define	BaudRate1		115200UL	//ѡ������
#define	Timer1_Reload	(65536UL -(MAIN_Fosc / 4 / BaudRate1))		//Timer 1 ��װֵ�� ��Ӧ300KHZ
#define	Timer2_Reload	(65536UL -(MAIN_Fosc / 4 / BaudRate1))		//Timer 2 ��װֵ�� ��Ӧ300KHZ

SBIT(WIFI_VCC, _P5, 4); //������

SBIT(LED1, _P1, 0);//LED1
SBIT(LED2, _P1, 1);//LED2
SBIT(LED3, _P1, 2);//LED3

SBIT(DK1, _P3, 3);//�̵���
SBIT(BEEP, _P3, 4);//������
SBIT(K1, _P1, 3);//����1
SBIT(K2, _P1, 2);//����2
SBIT(K3, _P1, 4);//����3

SBIT(RF, _P1, 5);//����3
///////////////////////////////////////////////////////////////���ϲ��ֶ�����ϵͳ�ļ���״̬///////////////////////////////////////
#endif 
