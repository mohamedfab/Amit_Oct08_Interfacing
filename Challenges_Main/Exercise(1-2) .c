/**************************
 * Exercise(1-2).c
 * Author: Eng_Fawzi
 **************************/
#include <avr/io.h>
#include <util/delay.h>

#define LED0_PIN		(2)
#define LED1_PIN		(7)
#define LED2_PIN		(3)

int main ()
{
	/*	Configure LED0 and LED1 Pin as Output	*/
	DDRC=(1<<LED0_PIN)|(1<<LED1_PIN);
		/*	Configure LED2 Pin as Output	*/
	DDRD|=(1<<LED2_PIN);
	while(1)
	{
		/*	Toggle LED0	*/
		PORTC^=(1<<LED0_PIN);
		_delay_ms(100);
		/*	Toggle LED1	*/
		PORTC^=(1<<LED1_PIN);
		_delay_ms(100);
		/*	Toggle LED2	*/
		PORTD^=(1<<LED2_PIN);
		_delay_ms(100);
	}
	return 0;
}