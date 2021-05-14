/**************************
 * Exercise(1-1).c
 * Author: Eng_Fawzi
 **************************/
#include <avr/io.h>
#include <util/delay.h>

#define LED0_PIN		(2)
int main ()
{
		/*	Configure LED0 Pin as Output	*/
	DDRC|=(1<<LED0_PIN);
	while(1)
	{
		/*	Toggle LED0	*/
		PORTC^=(1<<LED0_PIN);
		_delay_ms(500);
	}
	return 0;
}