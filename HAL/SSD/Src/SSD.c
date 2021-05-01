/*
 * SSD.c
 *
 *  Created on: May 1, 2021
 *      Author: Eng_Fawzi
 */

#include "SSD_Interface.h"

void SSD_Init(void)
{
	Dio_ConfigChannel(DIO_PORTB,DIO_CHANNEL1,OUTPUT);
	Dio_ConfigChannel(DIO_PORTB,DIO_CHANNEL2,OUTPUT);

	Dio_ConfigChannels(DIO_PORTA, SSD_MASK, OUTPUT);
}
void SSD_Display(u8 num)
{
	Dio_WriteChannel(DIO_PORTB, DIO_CHANNEL1,STD_HIGH);   	/* Turn ON SSD1*/
	Dio_WriteChannel(DIO_PORTB, DIO_CHANNEL2,STD_LOW); 		/* Turn OFF SSD2*/
	Dio_WriteChannels(DIO_PORTA, num%10<<4, SSD_MASK);
	_delay_ms(500);
	Dio_WriteChannel(DIO_PORTB, DIO_CHANNEL1,STD_LOW);   	/* Turn OFF SSD1*/
	Dio_WriteChannel(DIO_PORTB, DIO_CHANNEL2,STD_HIGH); 	/* Turn ON SSD2*/
	Dio_WriteChannels(DIO_PORTA, num/10<<4, SSD_MASK);
	_delay_ms(500);
}
