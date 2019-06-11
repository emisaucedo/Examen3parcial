#include <18f4620.h>
#include <Exa.h>
#fuses XT, NOMCLR
#use delay(clock=40M)
int16 contador=0;
char cadena[];
int a=0;
#int_timer0
void timer0()
{
    contador++;
    if(contador%100==0)
    {
        output_high(PIN_D0);   
    }
    else
    {
        output_low(PIN_D0);
    }
    SET_TIMER0(6);
}
void main()
{
setup_timer_0(RTCC_INTERNAL | RTCC_DIV_16); 
SET_TIMER0(6);
enable_interrupts(INT_TIMER0);
enable_interrupts(GLOBAL);
printf("Bienvenido, R para borrar, S para empezar, A pa mostrar");
    while(true)
    {
    if(kbhit()){
           cadena[a]=getch();
           if(cadena[a]=='R' || cadena[a]=='S' || cadena[a]=='A' ||){
           printf("%c",cadena[a]);
      }          
    }
    switch(a)
    {
        case  'R':
        break;

        case 'S':
        break;
       
        case 'A':
        break; 
    }
}

