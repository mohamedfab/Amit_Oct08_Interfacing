/*************************************
 * main.c
 * Created on: Apr 23, 2021
 * Author: Eng_Fawzi
 *************************************/

#include <util/delay.h>
#include "Bit_Math.h"
#include "Std_Types.h"
#include "Dio_Private.h"

int main ()
{
	/* Set LED0 Pin Direction */
	SET_BIT(DIO_DDRC_REG,2);
	while (1)
	{
			/*	LED ON	*/
			SET_BIT(DIO_PORTC_REG,2);
			 _delay_ms(500);
			/* LED OFF */
			CLEAR_BIT(DIO_PORTC_REG,2);
			_delay_ms(500);
	}
	return 0;
}
