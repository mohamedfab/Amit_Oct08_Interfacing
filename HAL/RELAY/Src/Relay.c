/*
 * Relay.c
 *
 *  Created on: May 7, 2021
 *      Author: Eng_Fawzi
 */
#include "Relay_Interface.h"
void Relay_Init(void)
{
	Dio_ConfigChannel(RELAY_PORT,RELAY_CHANNEL,OUTPUT);
}
void Relay_TurnON(void)
{
	Dio_WriteChannel(RELAY_PORT,RELAY_CHANNEL,STD_HIGH);
}
void Relay_TurnOFF(void)
{
	Dio_WriteChannel(RELAY_PORT,RELAY_CHANNEL,STD_LOW);
}
void Relay_Toggle(void)
{
	Dio_FlipChannel(RELAY_PORT,RELAY_CHANNEL);
}


