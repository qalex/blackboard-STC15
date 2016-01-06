					   
/*------------------------------------------------------------------*/
/* --- STC MCU International Limited -------------------------------*/
/* --- STC 1T Series MCU RC Demo -----------------------------------*/
/* --- Mobile: (86)13922805190 -------------------------------------*/
/* --- Fax: 86-0513-55012956,55012947,55012969 ---------------------*/
/* --- Tel: 86-0513-55012928,55012929,55012966 ---------------------*/
/* --- Web: www.GXWMCU.com -----------------------------------------*/
/* --- QQ:  800003751 ----------------------------------------------*/
/* If you want to use the program or the program referenced in the  */
/* article, please specify in which data and procedures from STC    */
/*------------------------------------------------------------------*/



#ifndef	_STC15Fxxxx_H
#define	_STC15Fxxxx_H

#include "compiler.h"
#include "lint.h"

/*  BYTE Registers  */
#define _P0 0x80
SFR(P0, 0x80);
#define _SP 0x81
SFR(SP, 0x81);
#define _DPL 0x82
SFR(DPL, 0x82);
#define _DPH 0x83
SFR(DPH, 0x83);
#define _S4CON 0x84
SFR(S4CON, 0x84);
#define _S4BUF 0x85
SFR(S4BUF, 0x85);
#define _PCON 0x87
SFR(PCON, 0x87);

#define _TCON 0x88
SFR(TCON, 0x88);
#define _TMOD 0x89
SFR(TMOD, 0x89);
#define _TL0 0x8A
SFR(TL0, 0x8A);
#define _TL1 0x8B
SFR(TL1, 0x8B);
#define _TH0 0x8C
SFR(TH0, 0x8C);
#define _TH1 0x8D
SFR(TH1, 0x8D);
#define _AUXR 0x8E
SFR(AUXR, 0x8E);
#define _WAKE_CLKO 0x8F
SFR(WAKE_CLKO, 0x8F);
#define _INT_CLKO 0x8F
SFR(INT_CLKO, 0x8F);
#define _AUXR2 0x8F
SFR(AUXR2, 0x8F);

#define _RL_TL0 0x8A
SFR(RL_TL0, 0x8A);
#define _RL_TL1 0x8B
SFR(RL_TL1, 0x8B);
#define _RL_TH0 0x8C
SFR(RL_TH0, 0x8C);
#define _RL_TH1 0x8D
SFR(RL_TH1, 0x8D);


#define _P1 0x90
SFR(P1, 0x90);
#define _P1M1 0x91
SFR(P1M1, 0x91);	//P1M1.n,P1M0.n 	=00--->Standard,	01--->push-pull		ʵ����1T�Ķ�һ��
#define _P1M0 0x92
SFR(P1M0, 0x92);	//					=10--->pure input,	11--->open drain
#define _P0M1 0x93
SFR(P0M1, 0x93);	//P0M1.n,P0M0.n 	=00--->Standard,	01--->push-pull
#define _P0M0 0x94
SFR(P0M0, 0x94);	//					=10--->pure input,	11--->open drain
#define _P2M1 0x95
SFR(P2M1, 0x95);	//P2M1.n,P2M0.n 	=00--->Standard,	01--->push-pull
#define _P2M0 0x96
SFR(P2M0, 0x96);	//					=10--->pure input,	11--->open drain
#define _CLK_DIV 0x97
SFR(CLK_DIV, 0x97);
#define _PCON2 0x97
SFR(PCON2, 0x97);

#define _SCON 0x98
SFR(SCON, 0x98);
#define _SBUF 0x99
SFR(SBUF, 0x99);
#define _S2CON 0x9A
SFR(S2CON, 0x9A);	//
#define _S2BUF 0x9B
SFR(S2BUF, 0x9B);	//
#define _P1ASF 0x9D
SFR(P1ASF, 0x9D);	//ֻд��ģ������(AD��LVD)ѡ��

#define _P2 0xA0
SFR(P2, 0xA0);
#define _BUS_SPEED 0xA1
SFR(BUS_SPEED, 0xA1);
#define _AUXR1 0xA2
SFR(AUXR1, 0xA2);
#define _P_SW1 0xA2
SFR(P_SW1, 0xA2);

#define _IE 0xA8
SFR(IE, 0xA8);
#define _SADDR 0xA9
SFR(SADDR, 0xA9);
#define _WKTCL 0xAA
SFR(WKTCL, 0xAA);	//���Ѷ�ʱ�����ֽ�
#define _WKTCH 0xAB
SFR(WKTCH, 0xAB);	//���Ѷ�ʱ�����ֽ�
#define _S3CON 0xAC
SFR(S3CON, 0xAC);
#define _S3BUF 0xAD
SFR(S3BUF, 0xAD);
#define _IE2 0xAF
SFR(IE2, 0xAF);	//STC12C5A60S2ϵ��

#define _P3 0xB0
SFR(P3, 0xB0);
#define _P3M1 0xB1
SFR(P3M1, 0xB1);	//P3M1.n,P3M0.n 	=00--->Standard,	01--->push-pull
#define _P3M0 0xB2
SFR(P3M0, 0xB2);	//					=10--->pure input,	11--->open drain
#define _P4M1 0xB3
SFR(P4M1, 0xB3);	//P4M1.n,P4M0.n 	=00--->Standard,	01--->push-pull
#define _P4M0 0xB4
SFR(P4M0, 0xB4);	//					=10--->pure input,	11--->open drain
#define _IP2 0xB5
SFR(IP2, 0xB5);	//STC12C5A60S2ϵ��
#define _IPH2 0xB6
SFR(IPH2, 0xB6);	//STC12C5A60S2ϵ��
#define _IPH 0xB7
SFR(IPH, 0xB7);

#define _IP 0xB8
SFR(IP, 0xB8);
#define _SADEN 0xB9
SFR(SADEN, 0xB9);
#define _P_SW2 0xBA
SFR(P_SW2, 0xBA);
#define _ADC_CONTR 0xBC
SFR(ADC_CONTR, 0xBC);	//��ADϵ��
#define _ADC_RES 0xBD
SFR(ADC_RES, 0xBD);	//��ADϵ��
#define _ADC_RESL 0xBE
SFR(ADC_RESL, 0xBE);	//��ADϵ��

#define _P4 0xC0
SFR(P4, 0xC0);
#define _WDT_CONTR 0xC1
SFR(WDT_CONTR, 0xC1);
#define _IAP_DATA 0xC2
SFR(IAP_DATA, 0xC2);
#define _IAP_ADDRH 0xC3
SFR(IAP_ADDRH, 0xC3);
#define _IAP_ADDRL 0xC4
SFR(IAP_ADDRL, 0xC4);
#define _IAP_CMD 0xC5
SFR(IAP_CMD, 0xC5);
#define _IAP_TRIG 0xC6
SFR(IAP_TRIG, 0xC6);
#define _IAP_CONTR 0xC7
SFR(IAP_CONTR, 0xC7);

#define _ISP_DATA 0xC2
SFR(ISP_DATA, 0xC2);
#define _ISP_ADDRH 0xC3
SFR(ISP_ADDRH, 0xC3);
#define _ISP_ADDRL 0xC4
SFR(ISP_ADDRL, 0xC4);
#define _ISP_CMD 0xC5
SFR(ISP_CMD, 0xC5);
#define _ISP_TRIG 0xC6
SFR(ISP_TRIG, 0xC6);
#define _ISP_CONTR 0xC7
SFR(ISP_CONTR, 0xC7);

#define _P5 0xC8
SFR(P5, 0xC8);	//
#define _P5M1 0xC9
SFR(P5M1, 0xC9);	//	P5M1.n,P5M0.n 	=00--->Standard,	01--->push-pull
#define _P5M0 0xCA
SFR(P5M0, 0xCA);	//					=10--->pure input,	11--->open drain
#define _P6M1 0xCB
SFR(P6M1, 0xCB);	//	P5M1.n,P5M0.n 	=00--->Standard,	01--->push-pull
#define _P6M0 0xCC
SFR(P6M0, 0xCC);	//					=10--->pure input,	11--->open drain
#define _SPSTAT 0xCD
SFR(SPSTAT, 0xCD);	//
#define _SPCTL 0xCE
SFR(SPCTL, 0xCE);	//
#define _SPDAT 0xCF
SFR(SPDAT, 0xCF);	//

#define _PSW 0xD0
SFR(PSW, 0xD0);
#define _T4T3M 0xD1
SFR(T4T3M, 0xD1);
#define _T4H 0xD2
SFR(T4H, 0xD2);
#define _T4L 0xD3
SFR(T4L, 0xD3);
#define _T3H 0xD4
SFR(T3H, 0xD4);
#define _T3L 0xD5
SFR(T3L, 0xD5);
#define _T2H 0xD6
SFR(T2H, 0xD6);
#define _T2L 0xD7
SFR(T2L, 0xD7);

#define _TH4 0xD2
SFR(TH4, 0xD2);
#define _TL4 0xD3
SFR(TL4, 0xD3);
#define _TH3 0xD4
SFR(TH3, 0xD4);
#define _TL3 0xD5
SFR(TL3, 0xD5);
#define _TH2 0xD6
SFR(TH2, 0xD6);
#define _TL2 0xD7
SFR(TL2, 0xD7);

#define _RL_T4H 0xD2
SFR(RL_T4H, 0xD2);
#define _RL_T4L 0xD3
SFR(RL_T4L, 0xD3);
#define _RL_T3H 0xD4
SFR(RL_T3H, 0xD4);
#define _RL_T3L 0xD5
SFR(RL_T3L, 0xD5);
#define _RL_T2H 0xD6
SFR(RL_T2H, 0xD6);
#define _RL_T2L 0xD7
SFR(RL_T2L, 0xD7);

#define _CCON 0xD8
SFR(CCON, 0xD8);	//
#define _CMOD 0xD9
SFR(CMOD, 0xD9);	//
#define _CCAPM0 0xDA
SFR(CCAPM0, 0xDA);	//PCAģ��0�Ĺ���ģʽ�Ĵ�����
#define _CCAPM1 0xDB
SFR(CCAPM1, 0xDB);	//PCAģ��1�Ĺ���ģʽ�Ĵ�����
#define _CCAPM2 0xDC
SFR(CCAPM2, 0xDC);	//PCAģ��2�Ĺ���ģʽ�Ĵ�����

#define _ACC 0xE0
SFR(ACC, 0xE0);
#define _P7M1 0xE1
SFR(P7M1, 0xE1);
#define _P7M0 0xE2
SFR(P7M0, 0xE2);
#define _CMPCR1 0xE6
SFR(CMPCR1, 0xE6);
#define _CMPCR2 0xE7
SFR(CMPCR2, 0xE7);


#define _P6 0xE8
SFR(P6, 0xE8);
#define _CL 0xE9
SFR(CL, 0xE9);	//
#define _CCAP0L 0xEA
SFR(CCAP0L, 0xEA);	//PCAģ��0�Ĳ�׽/�ȽϼĴ�����8λ��
#define _CCAP1L 0xEB
SFR(CCAP1L, 0xEB);	//PCAģ��1�Ĳ�׽/�ȽϼĴ�����8λ��
#define _CCAP2L 0xEC
SFR(CCAP2L, 0xEC);	//PCAģ��2�Ĳ�׽/�ȽϼĴ�����8λ��

#define _B 0xF0
SFR(B, 0xF0);
#define _PCA_PWM0 0xF2
SFR(PCA_PWM0, 0xF2);	//PCAģ��0 PWM�Ĵ�����
#define _PCA_PWM1 0xF3
SFR(PCA_PWM1, 0xF3);	//PCAģ��1 PWM�Ĵ�����
#define _PCA_PWM2 0xF4
SFR(PCA_PWM2, 0xF4);	//PCAģ��2 PWM�Ĵ�����

#define _P7 0xF8
SFR(P7, 0xF8);
#define _CH 0xF9
SFR(CH, 0xF9);
#define _CCAP0H 0xFA
SFR(CCAP0H, 0xFA);		//PCAģ��0�Ĳ�׽/�ȽϼĴ�����8λ��
#define _CCAP1H 0xFB
SFR(CCAP1H, 0xFB);		//PCAģ��1�Ĳ�׽/�ȽϼĴ�����8λ��
#define _CCAP2H 0xFC
SFR(CCAP2H, 0xFC);		//PCAģ��2�Ĳ�׽/�ȽϼĴ�����8λ��


/*  BIT Registers  */
/*  PSW   */
SBIT(CY, _PSW, 7);
SBIT(AC, _PSW, 6);
SBIT(F0, _PSW, 5);
SBIT(RS1, _PSW, 4);
SBIT(RS0, _PSW, 3);
SBIT(OV, _PSW, 2);
SBIT(F1, _PSW, 1);
SBIT(P, _PSW, 0);

/*  TCON  */
SBIT(TF1, _TCON, 7);	//��ʱ��1����жϱ�־λ
SBIT(TR1, _TCON, 6);	//��ʱ��1���п���λ
SBIT(TF0, _TCON, 5);	//��ʱ��0����жϱ�־λ
SBIT(TR0, _TCON, 4);	//��ʱ��0���п���λ
SBIT(IE1, _TCON, 3);	//���ж�1��־λ
SBIT(IT1, _TCON, 2);	//���ж�1�źŷ�ʽ����λ��1���½����жϣ�0�������½����жϡ�
SBIT(IE0, _TCON, 1);	//���ж�0��־λ
SBIT(IT0, _TCON, 0);	//���ж�0�źŷ�ʽ����λ��1���½����жϣ�0�������½����жϡ�

/*  P0  */
SBIT(P00, _P0, 0);
SBIT(P01, _P0, 1);
SBIT(P02, _P0, 2);
SBIT(P03, _P0, 3);
SBIT(P04, _P0, 4);
SBIT(P05, _P0, 5);
SBIT(P06, _P0, 6);
SBIT(P07, _P0, 7);

/*  P1  */
SBIT(P10, _P1, 0);
SBIT(P11, _P1, 1);
SBIT(P12, _P1, 2);
SBIT(P13, _P1, 3);
SBIT(P14, _P1, 4);
SBIT(P15, _P1, 5);
SBIT(P16, _P1, 6);
SBIT(P17, _P1, 7);

SBIT(RXD2, _P1, 0);
SBIT(TXD2, _P1, 1);
SBIT(CCP1, _P1, 0);
SBIT(CCP0, _P1, 1);
SBIT(SPI_SS, _P1, 2);
SBIT(SPI_MOSI, _P1, 3);
SBIT(SPI_MISO, _P1, 4);
SBIT(SPI_SCLK, _P1, 5);

/*  P2  */
SBIT(P20, _P2, 0);
SBIT(P21, _P2, 1);
SBIT(P22, _P2, 2);
SBIT(P23, _P2, 3);
SBIT(P24, _P2, 4);
SBIT(P25, _P2, 5);
SBIT(P26, _P2, 6);
SBIT(P27, _P2, 7);

/*  P3  */
SBIT(P30, _P3, 0);
SBIT(P31, _P3, 1);
SBIT(P32, _P3, 2);
SBIT(P33, _P3, 3);
SBIT(P34, _P3, 4);
SBIT(P35, _P3, 5);
SBIT(P36, _P3, 6);
SBIT(P37, _P3, 7);

SBIT(RXD, _P3, 0);
SBIT(TXD, _P3, 1);
SBIT(INT0, _P3, 2);
SBIT(INT1, _P3, 3);
SBIT(T0, _P3, 4);
SBIT(T1, _P3, 5);
SBIT(WR, _P3, 6);
SBIT(RD, _P3, 7);
SBIT(CCP2, _P3, 7);

SBIT(CLKOUT0, _P3, 5);
SBIT(CLKOUT1, _P3, 4);

/*  P4  */
SBIT(P40, _P4, 0);
SBIT(P41, _P4, 1);
SBIT(P42, _P4, 2);
SBIT(P43, _P4, 3);
SBIT(P44, _P4, 4);
SBIT(P45, _P4, 5);
SBIT(P46, _P4, 6);
SBIT(P47, _P4, 7);

/*  P5  */
SBIT(P50, _P5, 0);
SBIT(P51, _P5, 1);
SBIT(P52, _P5, 2);
SBIT(P53, _P5, 3);
SBIT(P54, _P5, 4);
SBIT(P55, _P5, 5);
SBIT(P56, _P5, 6);
SBIT(P57, _P5, 7);

/*  SCON  */
SBIT(SM0, _SCON, 7);	//SM0/FE		SM0 SM1 = 00 ~ 11: ��ʽ0~3
SBIT(SM1, _SCON, 6);	//
SBIT(SM2, _SCON, 5);	//���ͨѶ
SBIT(REN, _SCON, 4);	//��������
SBIT(TB8, _SCON, 3);	//�������ݵ�8λ
SBIT(RB8, _SCON, 2);	//�������ݵ�8λ
SBIT(TI, _SCON, 1);	//�����жϱ�־λ
SBIT(RI, _SCON, 0);	//�����жϱ�־λ

/*  IE   */
SBIT(EA, _IE, 7);	//�ж������ܿ���λ
SBIT(ELVD, _IE, 6);	//��ѹ����ж�����λ
SBIT(EADC, _IE, 5);	//ADC �ж� ����λ
SBIT(ES, _IE, 4);	//�����ж� �������λ
SBIT(ET1, _IE, 3);	//��ʱ�ж�1�������λ
SBIT(EX1, _IE, 2);	//�ⲿ�ж�1�������λ
SBIT(ET0, _IE, 1);	//��ʱ�ж�0�������λ
SBIT(EX0, _IE, 0);	//�ⲿ�ж�0�������λ


/*  IP   */ 
/*
SBIT(PPCA, _IP, 7);	//PCA �ж� ���ȼ��趨λ
SBIT(PLVD, _IP, 6); 	//��ѹ�ж� ���ȼ��趨λ
SBIT(PADC, _IP, 5); 	//ADC �ж� ���ȼ��趨λ
SBIT(PS, _IP, 4);	//�����ж�0���ȼ��趨λ
SBIT(PT1, _IP, 3);	//��ʱ�ж�1���ȼ��趨λ
SBIT(PX1, _IP, 2);	//�ⲿ�ж�1���ȼ��趨λ
SBIT(PT0, _IP, 1);	//��ʱ�ж�0���ȼ��趨λ
SBIT(PX0, _IP, 0);	//�ⲿ�ж�0���ȼ��趨λ
*/

SBIT(ACC0, _ACC, 0);
SBIT(ACC1, _ACC, 1);
SBIT(ACC2, _ACC, 2);
SBIT(ACC3, _ACC, 3);
SBIT(ACC4, _ACC, 4);
SBIT(ACC5, _ACC, 5);
SBIT(ACC6, _ACC, 6);
SBIT(ACC7, _ACC, 7);

SBIT(B0, _B, 0);
SBIT(B1, _B, 1);
SBIT(B2, _B, 2);
SBIT(B3, _B, 3);
SBIT(B4, _B, 4);
SBIT(B5, _B, 5);
SBIT(B6, _B, 6);
SBIT(B7, _B, 7);


//							7     6     5    4    3    2    1     0    Reset Value
//sfr IE2       = 0xAF;		-     -     -    -    -    -   ESPI  ES2   0000,0000B	//Auxiliary Interrupt   
#define		SPI_INT_ENABLE()		IE2 |=  2	//����SPI�ж�
#define		SPI_INT_DISABLE()		IE2 &= ~2	//����SPI�ж�
#define		UART2_INT_ENABLE()		IE2 |=  1	//������2�ж�
#define		UART2_INT_DISABLE()		IE2 &= ~1	//������2�ж�

//                                          7     6     5    4    3    2    1    0    Reset Value
//sfr IP      = 0xB8; //�ж����ȼ���λ      PPCA  PLVD  PADC  PS   PT1  PX1  PT0  PX0   0000,0000
//--------
SBIT(PPCA, _IP, 7);	//PCA ģ���ж����ȼ�
SBIT(PLVD, _IP, 6);	//��ѹ����ж����ȼ�
SBIT(PADC, _IP, 5);	//ADC �ж����ȼ�
SBIT(PS, _IP, 4);	//�����ж�0���ȼ��趨λ
SBIT(PT1, _IP, 3);	//��ʱ�ж�1���ȼ��趨λ
SBIT(PX1, _IP, 2);	//�ⲿ�ж�1���ȼ��趨λ
SBIT(PT0, _IP, 1);	//��ʱ�ж�0���ȼ��趨λ
SBIT(PX0, _IP, 0);	//�ⲿ�ж�0���ȼ��趨λ

//                                           7      6      5     4     3     2    1     0        Reset Value
//sfr IPH   = 0xB7; //�ж����ȼ���λ       PPCAH  PLVDH  PADCH  PSH  PT1H  PX1H  PT0H  PX0H   0000,0000
//sfr IP2   = 0xB5; //                       -      -      -     -     -     -   PSPI   PS2   xxxx,xx00
//sfr IPH2  = 0xB6; //                       -      -      -     -     -     -   PSPIH  PS2H  xxxx,xx00
#define		PPCAH	0x80
#define		PLVDH	0x40
#define		PADCH	0x20
#define		PSH		0x10
#define		PT1H	0x08
#define		PX1H	0x04
#define		PT0H	0x02
#define		PX0H	0x01

#define		PCA_InterruptFirst()	PPCA = 1
#define		LVD_InterruptFirst()	PLVD = 1
#define		ADC_InterruptFirst()	PADC = 1
#define		UART1_InterruptFirst()	PS   = 1
#define		Timer1_InterruptFirst()	PT1  = 1
#define		INT1_InterruptFirst()	PX1  = 1
#define		Timer0_InterruptFirst()	PT0  = 1
#define		INT0_InterruptFirst()	PX0  = 1


/*************************************************************************************************/



/*************************************************************************************************/
#define		S1_DoubleRate()		PCON |= 0x80
#define		S1_SHIFT()			SCON &= 0x3f
#define		S1_8bit()			SCON  = (SCON & 0x3f) | 0x40
#define		S1_9bit()			SCON  = (SCON & 0x3f) | 0xc0
#define		S1_RX_Enable()		SCON |= 0x10
#define		S1_USE_P30P31()		P_SW1 &= ~0xc0					//UART1 ʹ��P30 P31��	Ĭ��
#define		S1_USE_P36P37()		P_SW1 = (P_SW1 & ~0xc0) | 0x40	//UART1 ʹ��P36 P37��
#define		S1_USE_P16P17()		P_SW1 = (P_SW1 & ~0xc0) | 0x80	//UART1 ʹ��P16 P17��
#define		S1_TXD_RXD_SHORT()	PCON2 |=  (1<<4)	//��TXD��RXD�����м����
#define		S1_TXD_RXD_OPEN()	PCON2 &= ~(1<<4)	//��TXD��RXD�����м̶Ͽ�	Ĭ��
#define 	S1_BRT_UseTimer2()	AUXR |=  1
#define 	S1_BRT_UseTimer1()	AUXR &= ~1

//						  7      6      5      4      3      2     1     0        Reset Value
//sfr S2CON = 0x9A;		S2SM0    -    S2SM2  S2REN  S2TB8  S2RB8  S2TI  S2RI      00000000B		 //S2 Control

#define		S2_8bit()			S2CON &= ~(1<<7)		//����2ģʽ0��8λUART�������� = ��ʱ��2������� / 4
#define		S2_9bit()			S2CON |=  (1<<7)		//����2ģʽ1��9λUART�������� = ��ʱ��2������� / 4
#define		S2_RX_Enable()		S2CON |=  (1<<4)		//����2����

#define		S2_MODE0()			S2CON &= ~(1<<7)		//����2ģʽ0��8λUART�������� = ��ʱ��2������� / 4
#define		S2_MODE1()			S2CON |=  (1<<7)		//����2ģʽ1��9λUART�������� = ��ʱ��2������� / 4
#define		S2_RX_EN()			S2CON |=  (1<<4)							//����2����
#define		S2_RX_Disable()		S2CON &= ~(1<<4)							//��ֹ��2����
#define		TI2					(S2CON & 2) != 0
#define		RI2					(S2CON & 1) != 0
#define		SET_TI2()			S2CON |=  2
#define		CLR_TI2()			S2CON &= ~2
#define		CLR_RI2()			S2CON &= ~1
#define		S2TB8_SET()			S2CON |=  8
#define		S2TB8_CLR()			S2CON &= ~8
#define		S2_Int_en()			IE2   |=  1		//����2�����ж�
#define		S2_USE_P10P11()		P_SW2 &= ~1		//UART2 ʹ��P1��	Ĭ��
#define		S2_USE_P46P47()		P_SW2 |=  1		//UART2 ʹ��P4��

#define		S3_USE_P00P01()		P_SW2 &= ~2		//UART3 ʹ��P0��	Ĭ��
#define		S3_USE_P50P51()		P_SW2 |=  2		//UART3 ʹ��P5��
#define		S4_USE_P02P03()		P_SW2 &= ~4		//UART4 ʹ��P0��	Ĭ��
#define		S4_USE_P52P53()		P_SW2 |=  4		//UART4 ʹ��P5��


/**********************************************************/

#define		Timer0_16bitAutoReload()	TMOD &= ~0x03					//16λ�Զ���װ
#define		Timer0_16bit()				TMOD  = (TMOD & ~0x03) | 0x01	//16λ
#define		Timer0_8bitAutoReload()		TMOD  = (TMOD & ~0x03) | 0x02	//8λ�Զ���װ
#define		Timer0_16bitAutoRL_NoMask()	TMOD |=  0x03		//16λ�Զ���װ���������ж�
#define		Timer0_AsCounterP32()		TMOD |=  4		//ʱ��0����������
#define		Timer0_AsTimer()			TMOD &= ~4		//ʱ��0������ʱ��
#define		Timer0_ExtControlP34()		TMOD |=  4		//ʱ��0���ⲿINT0�ߵ�ƽ����ʱ����
#define 	Timer0_Run()	 			TR0 = 1				//����ʱ��0����
#define 	Timer0_Stop()	 			TR0 = 0				//��ֹ��ʱ��0����
#define 	Timer0_InterruptEnable()	ET0 = 1				//����Timer1�ж�.
#define 	Timer0_InterruptDisable()	ET0 = 0				//��ֹTimer1�ж�.

#define		Timer1_16bitAutoReload()	TMOD &= ~0x30					//16λ�Զ���װ
#define		Timer1_16bit()				TMOD  = (TMOD & ~0x30) | 0x10	//16λ
#define		Timer1_8bitAutoReload()		TMOD  = (TMOD & ~0x30) | 0x20	//8λ�Զ���װ
#define		Timer1_16bitAutoRL_NoMask()	TMOD |=  0x30		//16λ�Զ���װ���������ж�
#define		Timer1_AsCounterP33()		TMOD |=  (1<<6)		//ʱ��1����������
#define		Timer1_AsTimer()			TMOD &= ~(1<<6)		//ʱ��1������ʱ��
#define		Timer1_ExtControlP35()		TMOD |=  (1<<7)		//ʱ��1���ⲿINT1�ߵ�ƽ����ʱ����
#define 	Timer1_Run()	 			TR1 = 1				//����ʱ��1����
#define 	Timer1_Stop()	 			TR1 = 0				//��ֹ��ʱ��1����
#define 	Timer1_InterruptEnable()	ET1 = 1				//����Timer1�ж�.
#define 	Timer1_InterruptDisable()	ET1 = 0				//��ֹTimer1�ж�.


//						   7     6       5      4     3      2      1      0    Reset Value
//sfr AUXR  = 0x8E;		T0x12 T1x12 UART_M0x6  T2R  T2_C/T T2x12 EXTRAM  S1ST2  0000,0000	//Auxiliary Register 

#define 	Timer0_1T()					AUXR |=  (1<<7)	//Timer0 clodk = fo
#define 	Timer0_12T()				AUXR &= ~(1<<7)	//Timer0 clodk = fo/12	12��Ƶ,	default
#define 	Timer1_1T()					AUXR |=  (1<<6)	//Timer1 clodk = fo
#define 	Timer1_12T()				AUXR &= ~(1<<6)	//Timer1 clodk = fo/12	12��Ƶ,	default
#define		S1_M0x6()					AUXR |=  (1<<5)	//UART Mode0 Speed is 6x Standard
#define		S1_M0x1()					AUXR &= ~(1<<5)	//default,	UART Mode0 Speed is Standard
#define 	Timer2_Run()	 			AUXR |=  (1<<4)	//����ʱ��2����
#define 	Timer2_Stop()	 			AUXR &= ~(1<<4)	//��ֹ��ʱ��2����
#define		Timer2_AsCounterP31()		AUXR |=  (1<<3)	//ʱ��2����������
#define		Timer2_AsTimer()			AUXR &= ~(1<<3)	//ʱ��2������ʱ��
#define 	Timer2_1T()					AUXR |=  (1<<2)	//Timer0 clodk = fo
#define 	Timer2_12T()				AUXR &= ~(1<<2)	//Timer0 clodk = fo/12	12��Ƶ,	default
#define 	Timer2_InterruptEnable()	IE2  |=  (1<<2)	//����Timer2�ж�.
#define 	Timer2_InterruptDisable()	IE2  &= ~(1<<2)	//��ֹTimer2�ж�.

#define 	ExternalRAM_enable()		AUXR |=  2		//�����ⲿXRAM����ֹʹ���ڲ�1024RAM
#define 	InternalRAM_enable()		AUXR &= ~2		//��ֹ�ⲿXRAM������ʹ���ڲ�1024RAM

#define		T0_pulseP34_enable()		AUXR2 |=  1		//���� T0 ���������T0(P3.5)�������Fck0 = 1/2 T0 ����ʣ�T0����1T��12T��
#define		T0_pulseP34_disable()		AUXR2 &= ~1
#define		T1_pulseP35_enable()		AUXR2 |=  2		//���� T1 ���������T1(P3.4)�������Fck1 = 1/2 T1 ����ʣ�T1����1T��12T��
#define		T1_pulseP35_disable()		AUXR2 &= ~2
#define		T2_pulseP30_enable()		AUXR2 |=  4		//���� T2 ���������T1(P3.0)�������Fck2 = 1/2 T2 ����ʣ�T2����1T��12T��
#define		T2_pulseP30_disable()		AUXR2 &= ~4

#define		T0_pulseP35(n)		ET0=0,Timer0_AsTimer(),Timer0_1T(),Timer0_16bitAutoReload(),TH0=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL0=(65536-(n/2+MAIN_Fosc/2)/(n))%256,AUXR2 |= bit0,TR0=1		//fx=fosc/(2*M)/n,  M=1 or M=12
#define		T1_pulseP34(n)		ET1=0,Timer1_AsTimer(),Timer1_1T(),Timer1_16bitAutoReload(),TH1=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL1=(65536-(n/2+MAIN_Fosc/2)/(n))%256,AUXR2 |= bit1,TR1=1		//fx=fosc/(2*M)/n,  M=1 or M=12
#define		T2_pulseP30(n)		Timer2_InterruptDisable(),Timer2_AsTimer(),Timer2_1T(),TH2=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL2=(65536-(n/2+MAIN_Fosc/2)/(n))%256,AUXR2 |= bit2,Timer2_Run()	//fx=fosc/(2*M)/n,  M=1 or M=12

#define		Timer0_Load(n)		TH0 = (n) / 256,	TL0 = (n) % 256
#define		Timer1_Load(n)		TH1 = (n) / 256,	TL1 = (n) % 256
#define		Timer2_Load(n)		TH2 = (n) / 256,	TL2 = (n) % 256

#define		Timer0_Load_us(n)	TH0=(65536-MainFosc_KHZ*(n)/1000)/256,TL0=(65536-MainFosc_KHZ*(n)/1000)%256
#define		Timer1_Load_us(n)	TH1=(65536-MainFosc_KHZ*(n)/1000)/256,TL1=(65536-MainFosc_KHZ*(n)/1000)%256
#define		Timer2_Load_us(n)	TH2=(65536-MainFosc_KHZ*(n)/1000)/256,TL2=(65536-MainFosc_KHZ*(n)/1000)%256


//sfr WDT_CONTR = 0xC1; //Watch-Dog-Timer Control register
//                                      7     6     5      4       3      2   1   0     Reset Value
//                                  WDT_FLAG  -  EN_WDT CLR_WDT IDLE_WDT PS2 PS1 PS0    xx00,0000
#define D_WDT_FLAG			(1<<7)
#define D_EN_WDT			(1<<5)
#define D_CLR_WDT			(1<<4)	//auto clear
#define D_IDLE_WDT			(1<<3)	//WDT counter when Idle
#define D_WDT_SCALE_2		0
#define D_WDT_SCALE_4		1
#define D_WDT_SCALE_8		2		//T=393216*N/fo
#define D_WDT_SCALE_16		3
#define D_WDT_SCALE_32		4
#define D_WDT_SCALE_64		5
#define D_WDT_SCALE_128		6
#define D_WDT_SCALE_256		7

#define	WDT_reset(n)	WDT_CONTR = D_EN_WDT + D_CLR_WDT + D_IDLE_WDT + (n)		//��ʼ��WDT��ι��


//						  7     6      5    4     3      2    1     0     Reset Value
//sfr PCON   = 0x87;	SMOD  SMOD0  LVDF  POF   GF1    GF0   PD   IDL    0001,0000	 //Power Control 
//SMOD		//����˫����
//SMOD0
#define		LVDF		(1<<5)	//P4.6��ѹ����־
//POF
//GF1
//GF0
//#define 	D_PD		2		//set 1, power down mode
//#define 	D_IDLE		1		//set 1, idle mode
#define		MCU_IDLE()			PCON |= 1	//MCU ���� IDLE ģʽ
#define		MCU_POWER_DOWN()	PCON |= 2	//MCU ���� ˯�� ģʽ


//sfr ISP_CMD   = 0xC5;
#define		ISP_STANDBY()	ISP_CMD = 0		//ISP���������ֹ��
#define		ISP_READ()		ISP_CMD = 1		//ISP��������
#define		ISP_WRITE()		ISP_CMD = 2		//ISPд������
#define		ISP_ERASE()		ISP_CMD = 3		//ISP��������

//sfr ISP_TRIG  = 0xC6;
#define 	ISP_TRIG()	ISP_TRIG = 0x5A,	ISP_TRIG = 0xA5		//ISP��������

//							  7    6    5      4    3    2    1     0    Reset Value
//sfr IAP_CONTR = 0xC7;		IAPEN SWBS SWRST CFAIL  -   WT2  WT1   WT0   0000,x000	//IAP Control Register
#define ISP_EN			(1<<7)
#define ISP_SWBS		(1<<6)
#define ISP_SWRST		(1<<5)
#define ISP_CMD_FAIL	(1<<4)
#define ISP_WAIT_1MHZ	7
#define ISP_WAIT_2MHZ	6
#define ISP_WAIT_3MHZ	5
#define ISP_WAIT_6MHZ	4
#define ISP_WAIT_12MHZ	3
#define ISP_WAIT_20MHZ	2
#define ISP_WAIT_24MHZ	1
#define ISP_WAIT_30MHZ	0





/* ADC Register */
//								7       6      5       4         3      2    1    0   Reset Value
//sfr ADC_CONTR = 0xBC;		ADC_POWER SPEED1 SPEED0 ADC_FLAG ADC_START CHS2 CHS1 CHS0 0000,0000	//AD ת�����ƼĴ��� 
//sfr ADC_RES  = 0xBD;		ADCV.9 ADCV.8 ADCV.7 ADCV.6 ADCV.5 ADCV.4 ADCV.3 ADCV.2	  0000,0000	//A/D ת�������8λ 
//sfr ADC_RESL = 0xBE;												  ADCV.1 ADCV.0	  0000,0000	//A/D ת�������2λ
//sfr ADC_CONTR  = 0xBC;	//ֱ����MOV��������Ҫ�����


//sfr SPCTL  = 0xCE;	SPI���ƼĴ���
//   7       6       5       4       3       2       1       0    	Reset Value
//	SSIG	SPEN	DORD	MSTR	CPOL	CPHA	SPR1	SPR0		0x00

#define	SPI_SSIG_None()		SPCTL |=  (1<<7)		//1: ����SS��
#define	SPI_SSIG_Enable()	SPCTL &= ~(1<<7)		//0: SS�����ھ������ӻ�
#define	SPI_Enable()		SPCTL |=  (1<<6)		//1: ����SPI
#define	SPI_Disable()		SPCTL &= ~(1<<6)		//0: ��ֹSPI
#define	SPI_LSB_First()		SPCTL |=  (1<<5)		//1: LSB�ȷ�
#define	SPI_MSB_First()		SPCTL &= ~(1<<5)		//0: MSB�ȷ�
#define	SPI_Master()		SPCTL |=  (1<<4)		//1: ��Ϊ����
#define	SPI_Slave()			SPCTL &= ~(1<<4)		//0: ��Ϊ�ӻ�
#define	SPI_SCLK_NormalH()	SPCTL |=  (1<<3)		//1: ����ʱSCLKΪ�ߵ�ƽ
#define	SPI_SCLK_NormalL()	SPCTL &= ~(1<<3)		//0: ����ʱSCLKΪ�͵�ƽ
#define	SPI_PhaseH()		SPCTL |=  (1<<2)		//1: 
#define	SPI_PhaseL()		SPCTL &= ~(1<<2)		//0: 
#define	SPI_Speed(n)		SPCTL = (SPCTL & ~3) | (n)	//�����ٶ�, 0 -- fosc/4, 1 -- fosc/16, 2 -- fosc/64, 3 -- fosc/128

//sfr SPDAT  = 0xCF; //SPI Data Register                                                     0000,0000
//sfr SPSTAT  = 0xCD;	//SPI״̬�Ĵ���
//   7       6      5   4   3   2   1   0    	Reset Value
//	SPIF	WCOL	-	-	-	-	-	-
#define	SPIF	0x80		//SPI������ɱ�־��д��1��0��
#define	WCOL	0x40		//SPIд��ͻ��־��д��1��0��

#define		SPI_USE_P12P13P14P15()	AUXR1 &= ~0x0c	//��SPI�л���P12(SS) P13(MOSI) P14(MISO) P15(SCLK)(�ϵ�Ĭ��)��
#define		SPI_USE_P24P23P22P21()	AUXR1 = (AUXR1 & ~0x0c) | 0x04	//��SPI�л���P24(SS) P23(MOSI) P22(MISO) P21(SCLK)��
#define		SPI_USE_P54P40P41P43()	AUXR1 = (AUXR1 & ~0x0c) | 0x08	//��SPI�л���P54(SS) P40(MOSI) P41(MISO) P43(SCLK)��


/*
;PCA_PWMn:    7       6     5   4   3   2     1       0
;			EBSn_1	EBSn_0	-	-	-	-	EPCnH	EPCnL
;B5-B2:		����
;B1(EPCnH):	��PWMģʽ�£���CCAPnH���9λ����
;B0(EPCnL):	��PWMģʽ�£���CCAPnL���9λ����
*/
#define		PWM0_NORMAL()	PCA_PWM0 &= ~3				//PWM0�������(Ĭ��)
#define		PWM0_OUT_0()	PCA_PWM0 |=  3				//PWM0һֱ���0
#define		PWM0_OUT_1()	PCA_PWM0 &= ~3, CCAP0H = 0	//PWM0һֱ���1

#define		PWM1_NORMAL()	PCA_PWM1 &= ~3				//PWM0�������(Ĭ��)
#define		PWM1_OUT_0()	PCA_PWM1 |=  3				//PWM0һֱ���0
#define		PWM1_OUT_1()	PCA_PWM1 &= ~3, CCAP1H = 0	//PWM1һֱ���1

#define		PWM2_NORMAL()	PCA_PWM2 &= ~3				//PWM1�������(Ĭ��)
#define		PWM2_OUT_0()	PCA_PWM2 |=  3				//PWM2һֱ���0
#define		PWM2_OUT_1()	PCA_PWM2 &= ~3, CCAP2H = 0	//PWM2һֱ���1


//						7     6     5     4     3     2     1     0     Reset Value
//sfr CCON   = 0xD8;	CF    CR    -     -     -    CCF2  CCF1  CCF0   00xx,xx00	//PCA ���ƼĴ�����
SBIT(CCF0, _CCON, 0);	//PCA ģ��0�жϱ�־����Ӳ����λ�������������0��
SBIT(CCF1, _CCON, 1);	//PCA ģ��1�жϱ�־����Ӳ����λ�������������0��
SBIT(CCF2, _CCON, 2);	//PCA ģ��2�жϱ�־����Ӳ����λ�������������0��
SBIT(CR, _CCON, 6);	//1: ����PCA�����������������������0��
SBIT(CF, _CCON, 7);	//PCA�����������CH��CL��FFFFH��Ϊ0000H����־��PCA�������������Ӳ����λ�������������0��

//					 7     6     5     4     3     2     1     0    Reset Value
//sfr CMOD  = 0xD9;	CIDL   -     -     -   CPS2   CPS1  CPS0  ECF   0xxx,0000	//PCA ����ģʽ�Ĵ�����
#define PCA_IDLE_OFF()		CMOD |=  (1<<7)				//IDLE״̬PCAֹͣ������
#define PCA_IDLE_ON()		CMOD &= ~(1<<7)				//IDLE״̬PCA����������
#define PCA_CLK_12T()		CMOD &= ~0x0E				//PCA��������ѡ���ⲿ����/12��	fosc/12
#define PCA_CLK_2T()		CMOD = (CMOD & ~0x0E) + 2	//PCA��������ѡ���ⲿ����/2��	fosc/2
#define PCA_CLK_T0()		CMOD = (CMOD & ~0x0E) + 4	//PCA��������ѡ��Timer0�жϣ�Timer0��ͨ��AUXR�Ĵ������óɹ�����12T��1Tģʽ��
#define PCA_CLK_ECI()		CMOD = (CMOD & ~0x0E) + 6	//PCA��������ѡ���ECI/P3.4��������ⲿʱ�ӣ���� fosc/2��
#define PCA_CLK_1T()		CMOD = (CMOD & ~0x0E) + 8	//PCA��������ѡ���ⲿ����		Fosc/1
#define PCA_CLK_4T()		CMOD = (CMOD & ~0x0E) + 10	//PCA��������ѡ���ⲿ����/4��	Fosc/4
#define PCA_CLK_6T()		CMOD = (CMOD & ~0x0E) + 12	//PCA��������ѡ���ⲿ����/6��	Fosc/6
#define PCA_CLK_8T()		CMOD = (CMOD & ~0x0E) + 14	//PCA��������ѡ���ⲿ����/8��	Fosc/8
#define PCA_INT_ENABLE()	CMOD |=  1					//PCA����������ж�����λ��1---����CF��CCON.7�������жϡ�
#define PCA_INT_DISABLE()	CMOD &= ~1					//PCA����������жϽ�ֹ��

//					    7      6       5        4       3       2       1      0    Reset Value
//sfr AUXR1 = 0xA2;	  S1_S1  S1_S0  CCP_S1   CCP_S0  SPI_S1   SPI_S0    -     DPS   0100,0000	//Auxiliary Register 1

#define		PCA_USE_P12P11P10P37()	AUXR1 &= ~0x30		//��PCA/PWM�л���P12(ECI) P11(CCP0) P10(CCP1) P37(CCP2)(�ϵ�Ĭ��)��
#define		PCA_USE_P34P35P36P37()	AUXR1 = (AUXR1 & ~0x30) | 0x10	//��PCA/PWM�л���P34(ECI) P35(CCP0) P36(CCP1) P37(CCP2)��
#define		PCA_USE_P24P25P26P27()	AUXR1 = (AUXR1 & ~0x30) | 0x20	//��PCA/PWM�л���P24(ECI) P25(CCP0) P26(CCP1) P27(CCP2)��

#define		DPS_SEL1()		AUXR1 |=  1		//1��ѡ��DPTR1��
#define		DPS_SEL0()		AUXR1 &= ~1		//0��ѡ��DPTR0(�ϵ�Ĭ��)��


/*									7     6      5      4     3     2     1     0     Reset Value
//sfr CCAPM0 = 0xDA;	PWM �Ĵ���  -   ECOM0  CAPP0  CAPN0  MAT0  TOG0  PWM0  ECCF0   x000,0000	//PCA ģ��0 
//sfr CCAPM1 = 0xDB;	PWM �Ĵ���  -   ECOM1  CAPP1  CAPN1  MAT1  TOG1  PWM1  ECCF1   x000,0000	//PCA ģ��1
//sfr CCAPM2 = 0xDC;	PWM �Ĵ���  -   ECOM2  CAPP2  CAPN2  MAT2  TOG2  PWM2  ECCF2   x000,0000	//PCA ģ��2
;ECOMn = 1:	����ȽϹ��ܡ�
;CAPPn = 1:	���������ش�����׽���ܡ�
;CAPNn = 1:	�����½��ش�����׽���ܡ�
;MATn  = 1:	��ƥ���������ʱ������CCON�е�CCFn��λ��
;TOGn  = 1:	��ƥ���������ʱ��CEXn����ת��(CEX0/PCA0/PWM0/P3.7,CEX1/PCA1/PWM1/P3.5)
;PWMn  = 1:	��CEXn����ΪPWM�����
;ECCFn = 1:	����CCON�е�CCFn�����жϡ�
;ECOMn CAPPn CAPNn MATn TOGn PWMn ECCFn
;  0     0     0    0    0    0     0		00H	δ�����κι��ܡ�
;  x     1     0    0    0    0     x	 	20H	16λCEXn�����ش�����׽���ܡ�
;  x     0     1    0    0    0     x	 	10H	16λCEXn�½��ش�����׽���ܡ�
;  x     1     1    0    0    0     x	 	30H	16λCEXn/PCAn���أ��ϡ����أ�������׽���ܡ�
;  1     0     0    1    0    0     x	 	48H	16λ�����ʱ����
;  1     0     0    1    1    0     x	 	4CH	16λ�������������
;  1     0     0    0    0    1     0		42H	8λPWM�����ж�
;  1     1     0    0    0    1     1		63H	8λPWM���ͱ�߿ɲ����ж�
;  1     0     1    0    0    1     1		53H	8λPWM���߱�Ϳɲ����ж�
;  1     1     1    0    0    1     1		73H	8λPWM���ͱ�߻�߱�;��ɲ����ж�
;*******************************************************************
;*******************************************************************/
#define		PCA0_none()				CCAPM0 = 0
#define		PCA0_PWM(nbit)			CCAPM0 = 0x42,PCA_PWM0 = (PCA_PWM0 & 0x0c) | ((8-nbit)<<6)
#define		PCA0_PWM_rise_int(nbit) CCAPM0 = 0x63,PCA_PWM0 = (PCA_PWM0 & 0x0c) | ((8-nbit)<<6)
#define		PCA0_PWM_fall_int(nbit) CCAPM0 = 0x53,PCA_PWM0 = (PCA_PWM0 & 0x0c) | ((8-nbit)<<6)
#define		PCA0_PWM_edge_int(nbit) CCAPM0 = 0x73,PCA_PWM0 = (PCA_PWM0 & 0x0c) | ((8-nbit)<<6)
#define		PCA0_capture_rise()		CCAPM0 = (0x20 + 1)
#define		PCA0_capture_fall()		CCAPM0 = (0x10 + 1)
#define		PCA0_capture_edge()		CCAPM0 = (0x30 + 1)
#define		PCA0_16bit_Timer()		CCAPM0 = (0x48 + 1)
#define		PCA0_High_Pulse()		CCAPM0 = (0x4C + 1)

#define		PCA1_none()				CCAPM1 = 0
#define		PCA1_PWM(nbit)			CCAPM1 = 0x42,PCA_PWM1 = (PCA_PWM1 & 0x0c) | ((8-nbit)<<6)
#define		PCA1_PWM_rise_int(nbit) CCAPM1 = 0x63,PCA_PWM1 = (PCA_PWM1 & 0x0c) | ((8-nbit)<<6)
#define		PCA1_PWM_fall_int(nbit) CCAPM1 = 0x53,PCA_PWM1 = (PCA_PWM1 & 0x0c) | ((8-nbit)<<6)
#define		PCA1_PWM_edge_int(nbit) CCAPM1 = 0x73,PCA_PWM1 = (PCA_PWM1 & 0x0c) | ((8-nbit)<<6)
#define		PCA1_capture_rise()		CCAPM1 = (0x20 + 1)
#define		PCA1_capture_fall()		CCAPM1 = (0x10 + 1)
#define		PCA1_capture_edge()		CCAPM1 = (0x30 + 1)
#define		PCA1_16bit_Timer()		CCAPM1 = (0x48 + 1)
#define		PCA1_High_Pulse()		CCAPM1 = (0x4C + 1)

#define		PCA2_none()				CCAPM2 = 0
#define		PCA2_PWM(nbit)			CCAPM2 = 0x42,PCA_PWM2 = (PCA_PWM2 & 0x0c) | ((8-nbit)<<6)
#define		PCA2_PWM_rise_int(nbit) CCAPM2 = 0x63,PCA_PWM2 = (PCA_PWM2 & 0x0c) | ((8-nbit)<<6)
#define		PCA2_PWM_fall_int(nbit) CCAPM2 = 0x53,PCA_PWM2 = (PCA_PWM2 & 0x0c) | ((8-nbit)<<6)
#define		PCA2_PWM_edge_int(nbit) CCAPM2 = 0x73,PCA_PWM2 = (PCA_PWM2 & 0x0c) | ((8-nbit)<<6)
#define		PCA2_capture_rise()		CCAPM2 = (0x20 + 1)
#define		PCA2_capture_fall()		CCAPM2 = (0x10 + 1)
#define		PCA2_capture_edge()		CCAPM2 = (0x30 + 1)
#define		PCA2_16bit_Timer()		CCAPM2 = (0x48 + 1)
#define		PCA2_High_Pulse()		CCAPM2 = (0x4C + 1)

/* Above is STC additional SFR or change */




/**********************************************************/


/**********************************************************/
#define NOP1()  __asm__("nop")
#define NOP2()  NOP1();NOP1()
#define NOP3()  NOP2();NOP1()
#define NOP4()  NOP3();NOP1()
#define NOP5()  NOP4();NOP1()
#define NOP6()  NOP5();NOP1()
#define NOP7()  NOP6();NOP1()
#define NOP8()  NOP7();NOP1()
#define NOP9()  NOP8();NOP1()
#define NOP10() NOP9();NOP1()
#define NOP11() NOP10();NOP1()
#define NOP12() NOP11();NOP1()
#define NOP13() NOP12();NOP1()
#define NOP14() NOP13();NOP1()
#define NOP15() NOP14();NOP1()
#define NOP16() NOP15();NOP1()
#define NOP17() NOP16();NOP1()
#define NOP18() NOP17();NOP1()
#define NOP19() NOP18();NOP1()
#define NOP20() NOP19();NOP1()
#define NOP21() NOP20();NOP1()
#define NOP22() NOP21();NOP1()
#define NOP23() NOP22();NOP1()
#define NOP24() NOP23();NOP1()
#define NOP25() NOP24();NOP1()
#define NOP26() NOP25();NOP1()
#define NOP27() NOP26();NOP1()
#define NOP28() NOP27();NOP1()
#define NOP29() NOP28();NOP1()
#define NOP30() NOP29();NOP1()
#define NOP31() NOP30();NOP1()
#define NOP32() NOP31();NOP1()
#define NOP33() NOP32();NOP1()
#define NOP34() NOP33();NOP1()
#define NOP35() NOP34();NOP1()
#define NOP36() NOP35();NOP1()
#define NOP37() NOP36();NOP1()
#define NOP38() NOP37();NOP1()
#define NOP39() NOP38();NOP1()
#define NOP40() NOP39();NOP1()
#define NOP(N)  NOP##N()


/**********************************************/


/****************************************************************/


//sfr INT_CLKO = 0x8F;	//���ӵ� SFR WAKE_CLKO (��ַ��0x8F)
/*
    7   6    5    4   3     2        1       0         Reset Value
    -  EX4  EX3  EX2  -   T2CLKO   T1CLKO  T0CLKO      0000,0000B
b6 -  EX4      : ���ж�INT4����
b5 -  EX3      : ���ж�INT3����
b4 -  EX2      : ���ж�INT2����
b2 - T1CLKO    : ���� T2 ���������P3.0�������Fck1 = 1/2 T1 �����
b1 - T1CLKO    : ���� T1 ���������P3.4�������Fck1 = 1/2 T1 �����
b0 - T0CLKO    : ���� T0 ���������P3.5�������Fck0 = 1/2 T0 �����
*/

#define		LVD_InterruptEnable()		ELVD = 1
#define		LVD_InterruptDisable()		ELVD = 0


//sfr WKTCL = 0xAA;	//STC11F\10��STC15ϵ�� ���Ѷ�ʱ�����ֽ�
//sfr WKTCH = 0xAB;	//STC11F\10��STC15ϵ�� ���Ѷ�ʱ�����ֽ�
//	B7		B6	B5	B4	B3	B2	B1	B0		B7	B6	B5	B4	B3	B2	B1	B0
//	WKTEN				S11	S10	S9	S8		S7	S6	S5	S4	S3	S2	S1	S0	n * 560us
#define		WakeTimerDisable()		WKTCH &= 0x7f	//WKTEN = 0		��ֹ˯�߻��Ѷ�ʱ��
#define		WakeTimerSet(scale)		WKTCL = (scale) % 256,WKTCH = (scale) / 256 | 0x80	//WKTEN = 1	����˯�߻��Ѷ�ʱ��


//sfr CLK_DIV = 0x97; //Clock Divder ϵͳʱ�ӷ�Ƶ  -     -      -       -     -  CLKS2 CLKS1 CLKS0 xxxx,x000
#define		SYSTEM_CLK_1T()		CLK_DIV &= ~0x07	//default
#define		SYSTEM_CLK_2T()		CLK_DIV = (CLK_DIV & ~0x07) | 1
#define		SYSTEM_CLK_4T()		CLK_DIV = (CLK_DIV & ~0x07) | 2
#define		SYSTEM_CLK_8T()		CLK_DIV = (CLK_DIV & ~0x07) | 3
#define		SYSTEM_CLK_16T()	CLK_DIV = (CLK_DIV & ~0x07) | 4
#define		SYSTEM_CLK_32T()	CLK_DIV = (CLK_DIV & ~0x07) | 5
#define		SYSTEM_CLK_64T()	CLK_DIV = (CLK_DIV & ~0x07) | 6
#define		SYSTEM_CLK_128T()	CLK_DIV =  CLK_DIV          | 7

#define		MCLKO_P54_None()	CLK_DIV &= ~0xc0					//��ʱ�Ӳ����
#define		MCLKO_P54_DIV1()	CLK_DIV  = (CLK_DIV & ~0xc0) | 0x40	//��ʱ�Ӳ���Ƶ���
#define		MCLKO_P54_DIV2()	CLK_DIV  = (CLK_DIV & ~0xc0) | 0x80	//��ʱ��2��Ƶ���
#define		MCLKO_P54_DIV4()	CLK_DIV  =  CLK_DIV | 0xc0			//��ʱ��4��Ƶ���

#define		MCLKO_P34_None()	CLK_DIV &= ~0xc0					//��ʱ�Ӳ����
#define		MCLKO_P34_DIV1()	CLK_DIV  = (CLK_DIV & ~0xc0) | 0x40	//��ʱ�Ӳ���Ƶ���
#define		MCLKO_P34_DIV2()	CLK_DIV  = (CLK_DIV & ~0xc0) | 0x80	//��ʱ��2��Ƶ���
#define		MCLKO_P34_DIV4()	CLK_DIV  =  CLK_DIV | 0xc0			//��ʱ��4��Ƶ���

//sfr BUS_SPEED = 0xA1; //Stretch register      -   -  -  -   -   -  EXRTS1  EXRTSS0 xxxx,xx10
#define		BUS_SPEED_1T()	BUS_SPEED = 0
#define		BUS_SPEED_2T()	BUS_SPEED = 1
#define		BUS_SPEED_4T()	BUS_SPEED = 2
#define		BUS_SPEED_8T()	BUS_SPEED = 3

/*   interrupt vector */
#define		INT0_VECTOR		0
#define		TIMER0_VECTOR	1
#define		INT1_VECTOR		2
#define		TIMER1_VECTOR	3
#define		UART1_VECTOR	4
#define		ADC_VECTOR		5
#define		LVD_VECTOR		6
#define		PCA_VECTOR		7
#define		UART2_VECTOR	8
#define		SPI_VECTOR		9
#define		INT2_VECTOR		10
#define		INT3_VECTOR		11
#define		TIMER2_VECTOR	12
#define		INT4_VECTOR		16
#define		UART3_VECTOR	17
#define		UART4_VECTOR	18
#define		TIMER3_VECTOR	19
#define		TIMER4_VECTOR	20
#define		CMP_VECTOR		21


#define	TRUE	1
#define	FALSE	0

//=============================================================

//========================================

#define	PolityLow			0	//�����ȼ��ж�
#define	PolityHigh			1	//�����ȼ��ж�

//========================================

#define		MCLKO_None	0
#define		MCLKO_DIV1	1
#define		MCLKO_DIV2	2
#define		MCLKO_DIV4	3

#define		ENABLE		1
#define		DISABLE		0

#define		STC15F_L2K08S2	8
#define		STC15F_L2K16S2	16
#define		STC15F_L2K24S2	24
#define		STC15F_L2K32S2	32
#define		STC15F_L2K40S2	40
#define		STC15F_L2K48S2	48
#define		STC15F_L2K56S2	56
#define		STC15F_L2K60S2	60
#define		IAP15F_L2K61S2	61

#endif
