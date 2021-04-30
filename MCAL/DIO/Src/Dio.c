/*
 * Dio.c
 *
 *  Created on: Apr 30, 2021
 *      Author: Eng_Fawzi
 */

#include "Dio_Interface.h"
void Dio_ConfigChannel(Dio_Port port,Dio_Channel channel, Dio_Direction direction)
{
	switch (port)
	{
	case DIO_PORTA:
		if (direction == INPUT)
		{
			CLEAR_BIT(DIO_DDRA_REG,channel);
		}
		else
		{
			SET_BIT(DIO_DDRA_REG,channel);
		}
		break;
	case DIO_PORTB:
		if (direction == INPUT)
		{
			CLEAR_BIT(DIO_DDRB_REG,channel);
		}
		else
		{
			SET_BIT(DIO_DDRB_REG,channel);
		}
		break;
	case DIO_PORTC:
		if (direction == INPUT)
		{
			CLEAR_BIT(DIO_DDRC_REG,channel);
		}
		else
		{
			SET_BIT(DIO_DDRC_REG,channel);
		}
		break;
	case DIO_PORTD:
		if (direction == INPUT)
		{
			CLEAR_BIT(DIO_DDRD_REG,channel);
		}
		else
		{
			SET_BIT(DIO_DDRD_REG,channel);
		}
		break;
	}
}
void Dio_WriteChannel(Dio_Port port,Dio_Channel channel, Dio_Level level)
{
	switch (port)
	{
	case DIO_PORTA:
		if (level == STD_LOW)
		{
			CLEAR_BIT(DIO_PORTA_REG,channel);
		}
		else
		{
			SET_BIT(DIO_PORTA_REG,channel);
		}
		break;
	case DIO_PORTB:
		if (level == STD_LOW)
		{
			CLEAR_BIT(DIO_PORTB_REG,channel);
		}
		else
		{
			SET_BIT(DIO_PORTB_REG,channel);
		}
		break;
	case DIO_PORTC:
		if (level == STD_LOW)
		{
			CLEAR_BIT(DIO_PORTC_REG,channel);
		}
		else
		{
			SET_BIT(DIO_PORTC_REG,channel);
		}
		break;
	case DIO_PORTD:
		if (level == STD_LOW)
		{
			CLEAR_BIT(DIO_PORTD_REG,channel);
		}
		else
		{
			SET_BIT(DIO_PORTD_REG,channel);
		}
		break;
	}
}
Dio_Level Dio_ReadChannel(Dio_Port port,Dio_Channel channel)
{
	Dio_Level ret_level;
	switch (port)
	{
	case DIO_PORTA:
		ret_level = CHECK_BIT(DIO_PINA_REG,channel);
		break;
	case DIO_PORTB:
		ret_level = CHECK_BIT(DIO_PINB_REG,channel);
		break;
	case DIO_PORTC:
		ret_level = CHECK_BIT(DIO_PINC_REG,channel);
		break;
	case DIO_PORTD:
		ret_level = CHECK_BIT(DIO_PIND_REG,channel);
		break;
	}
	return ret_level;
}
