/*************************************
 * main.c
 * Blinking LED0
 * Created on: April 23, 2021
 * Author: Eng_Fawzi
 *************************************/
#include <util/delay.h>
#include <avr/io.h>
#include "SSD_Interface.h"
int main ()
{
	SSD_Init();
	while(1)
	{
		SSD_Display(25);
	}
	return 0;
}

