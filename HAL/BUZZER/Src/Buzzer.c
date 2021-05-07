/*
 * Buzzer.c
 *
 *  Created on: May 6, 2021
 *      Author: Eng_Fawzi
 */


#include "Buzzer_Interface.h"
void Buzzer_Init(void)
{
	Dio_ConfigChannel(BUZZER_PORT,BUZZER_CHANNEL,OUTPUT);
}
void Buzzer_TurnON(void)
{
	Dio_WriteChannel(BUZZER_PORT,BUZZER_CHANNEL,STD_HIGH);
}
void Buzzer_TurnOFF(void)
{
	Dio_WriteChannel(BUZZER_PORT,BUZZER_CHANNEL,STD_LOW);
}
void Buzzer_Toggle(void)
{
	Dio_FlipChannel(BUZZER_PORT,BUZZER_CHANNEL);
}
