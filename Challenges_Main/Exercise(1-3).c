/**************************
 * Exercise(1-3).c
 * Author: Eng_Fawzi
 **************************/
#include <avr/io.h>
#include <util/delay.h>
#include "Std_Types.h"

#define LED0_PIN		(2)
#define LED2_PIN		(3)

int main ()
{
	/*	Variable to track time delay elapsed	*/
	u8 coun=0;
	/*	Configure LED0 Pin as Output	*/
	DDRC|=(1<<LED0_PIN);
	/*	Configure LED2 Pin as Output	*/
	DDRD|=(1<<LED2_PIN);
	while(1)
	{
		_delay_ms(500);
		coun++;
		/*	If time delay elapsed is 500ms	*/
		if (coun == 1 || coun == 2 )
		{
			/*	Toggle LED0	*/
			PORTC^=(1<<LED0_PIN);
		}
		/*	If time delay elapsed is 1000ms	*/
		if(coun == 2)
		{
			/*	Toggle LED2	*/
			PORTD^=(1<<LED2_PIN);
			coun=0;
		}
	}
	return 0;
}
