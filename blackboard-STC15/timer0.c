#include"sys.h"

#define T1MS (65536 - MAIN_Fosc / 1000)      // 1ms
#define T2MS (65536 - MAIN_Fosc / 1000 * 2)

/* main program */
void timer0_ini() {
    Timer0_1T();
    Timer0_16bitAutoReload();

    Timer0_Load(T1MS);
    Timer0_InterruptEnable();
    EA = 1;
    Timer0_Run();
}
