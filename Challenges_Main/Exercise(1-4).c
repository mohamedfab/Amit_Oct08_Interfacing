/**************************
 * Exercise(1-4).c
 * Author: Eng_Fawzi
 **************************/
#include <avr/io.h>
#include <util/delay.h>
#include "Std_Types.h"

#define LED0_PIN		(2)
#define BUTTON0_PIN		(0)

int main ()
{
	/*	Configure LED0 Pin as Output	*/
	DDRC|=(1<<LED0_PIN);
	/*	Configure BUTTON0 Pin as Input	*/
	DDRB&=~(1<<BUTTON0_PIN);
	while(1)
	{
		/*	Check if BUTTON0 Pressed	*/
		while (PINB&(1<<BUTTON0_PIN))
		{
			/*	Turn ON LED0	*/
			PORTC|=(1<<LED0_PIN);
		}
		/*	Turn OFF LED0	*/
		PORTC&=~(1<<LED0_PIN);
	}
	return 0;
}
