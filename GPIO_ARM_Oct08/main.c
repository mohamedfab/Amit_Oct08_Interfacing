

/**
 * main.c
 */


#include "Dio_Interface.h"
void delay_ms(u32 delayMs)
{
    u32 delay;
    u32 count;
    for (delay = 0;delay <delayMs; delay++)
    {
        for (count =0;count<1590;count++)
        {
            ;  /*   delay for 1 MS */
        }
    }
}
void main(void)
{
    Dio_EnableClock(DIO_PORTF);
    Dio_EnableDigital(DIO_PORTF, DIO_CHANNEL3);
    Dio_ConfigChannel(DIO_PORTF, DIO_CHANNEL3, OUTPUT);
    while (1)
    {
        Dio_WriteChannel(DIO_PORTF, DIO_CHANNEL3, STD_HIGH);
        delay_ms(500);
        Dio_WriteChannel(DIO_PORTF, DIO_CHANNEL3, STD_LOW);
        delay_ms(500);
    }
}
