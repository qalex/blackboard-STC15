#include "STC15Fxxxx.h"

void PWM(unsigned char r,unsigned char g,unsigned char b)
{ 
    P_SW1|=0x20;
    P_SW1&=0xef;
    CCON = 0;                       //��ʼ��PCA���ƼĴ���
    CL = 0;                         //��λPCA�Ĵ���
    CH = 0;
    CMOD = 0x02;                    //����PCAʱ��Դ
                                    //��ֹPCA��ʱ������ж�
    PCA_PWM0 = 0x00;                //PCAģ��0������8λPWM
    CCAP0H = CCAP0L = r;         //PWM0��ռ�ձ�Ϊ87.5% ((100H-20H)/100H)
    CCAPM0 = 0x42;                  //PCAģ��0Ϊ8λPWMģʽ

    PCA_PWM1 = 0x00;                //PCAģ��1������7λPWM
    CCAP1H = CCAP1L = g;         //PWM1��ռ�ձ�Ϊ75% ((80H-20H)/80H)
    CCAPM1 = 0x42;                  //PCAģ��1Ϊ7λPWMģʽ

    PCA_PWM2 = 0x00;                //PCAģ��2������6λPWM
    CCAP2H = CCAP2L = b;         //PWM2��ռ�ձ�Ϊ50% ((40H-20H)/40H)
    CCAPM2 = 0x42;                  //PCAģ��2Ϊ6λPWMģʽ

    CR = 1;                         //PCA��ʱ����ʼ����
}

void set_pwm(unsigned char rr,unsigned char gg,unsigned char bb)
{
    CCAP0H = CCAP0L = rr;
    CCAP1H = CCAP1L = bb;
    CCAP2H = CCAP2L = gg;
}
