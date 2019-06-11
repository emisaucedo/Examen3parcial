#include <18f4620.h>
#include <Exa.h>
#fuses XT, NOMCLR
#use delay(clock=40M)
int16 contador=0;
int contadorseg=0;
#int_timer0
void timer0()
{
    contador++;
    if(contador==10)
{
contadorseg++;
}
    SET_TIMER0(6);
}
void main()
{
setup_timer_0(RTCC_INTERNAL | RTCC_DIV_16); 
SET_TIMER0(6);
enable_interrupts(INT_TIMER0);
enable_interrupts(GLOBAL);
printf("Bienvenido!");
    while(true)
    {
        system("CLS");
    }
    
}

