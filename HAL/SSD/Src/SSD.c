/*****************************************
 * SSD.c
 * Created on: May 1, 2021
 * Author: Eng_Fawzi
 *****************************************/
#include "SSD_Interface.h"
static void SSD_EnableDigit1(void)
{
	Dio_WriteChannel(SSD_DIGIT1_EN_PORT, SSD_DIGIT1_EN_CHANNEL,STD_HIGH);
}
static void SSD_DisableDigit1(void)
{
	Dio_WriteChannel(SSD_DIGIT1_EN_PORT, SSD_DIGIT1_EN_CHANNEL,STD_LOW);
}
static void SSD_EnableDigit2(void)
{
	Dio_WriteChannel(SSD_DIGIT2_EN_PORT, SSD_DIGIT2_EN_CHANNEL,STD_HIGH);
}
static void SSD_DisableDigit2(void)
{
	Dio_WriteChannel(SSD_DIGIT2_EN_PORT, SSD_DIGIT2_EN_CHANNEL,STD_LOW);
}
void SSD_Init(void)
{
	Dio_ConfigChannel(SSD_DIGIT1_EN_PORT,SSD_DIGIT1_EN_CHANNEL,OUTPUT);
	Dio_ConfigChannel(SSD_DIGIT2_EN_PORT,SSD_DIGIT2_EN_CHANNEL,OUTPUT);

	Dio_ConfigChannels(SSD_DATA_PORT, SSD_MASK, OUTPUT);
}
void SSD_Display(u8 num)
{
	u8 digit1=num%10<<4;
	u8 digit2=num/10<<4;
	SSD_EnableDigit1();   	/* Enable Digit One	*/
	SSD_DisableDigit2(); 	/* Disable Digit Two*/
	Dio_WriteChannels(SSD_DATA_PORT, digit1, SSD_MASK);
	_delay_ms(1);
	SSD_DisableDigit1();   	/* Disable Digit One	*/
	SSD_EnableDigit2();		/* Enable Digit Two	*/
	Dio_WriteChannels(SSD_DATA_PORT, digit2, SSD_MASK);
	_delay_ms(1);
	SSD_DisableDigit1();	/* Disable Digit One	*/
	SSD_DisableDigit2();	/* Disable Digit Two	*/
}
void SSD_DelayWithDisaplayMS(u8 num,u16 delay)
{
	u16 count=0;
	for (count=0;count<delay;count+=3)
	{
		SSD_Display(num);
		_delay_ms(1);
	}
}
