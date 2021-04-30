/*
 * Led.c
 *
 *  Created on: Apr 30, 2021
 *      Author: Eng_Fawzi
 */

#include "Led_Interface.h"

void Led_Init(void)
{
	Dio_ConfigChannel(DIO_PORTC, DIO_CHANNEL2, OUTPUT);
	Dio_ConfigChannel(DIO_PORTC, DIO_CHANNEL7, OUTPUT);
	Dio_ConfigChannel(DIO_PORTD, DIO_CHANNEL3, OUTPUT);
}
void Led_ON(Led_ID led)
{
	switch (led)
	{
	case LED0:
		Dio_WriteChannel(DIO_PORTC,DIO_CHANNEL2,STD_HIGH);
		break;
	case LED1:
		Dio_WriteChannel(DIO_PORTC,DIO_CHANNEL7,STD_HIGH);
		break;
	case LED2:
		Dio_WriteChannel(DIO_PORTD,DIO_CHANNEL3,STD_HIGH);
		break;
	}
}
void Led_OFF(Led_ID led)
{
	switch (led)
	{
	case LED0:
		Dio_WriteChannel(DIO_PORTC,DIO_CHANNEL2,STD_LOW);
		break;
	case LED1:
		Dio_WriteChannel(DIO_PORTC,DIO_CHANNEL7,STD_LOW);
		break;
	case LED2:
		Dio_WriteChannel(DIO_PORTD,DIO_CHANNEL3,STD_LOW);
		break;
	}
}
