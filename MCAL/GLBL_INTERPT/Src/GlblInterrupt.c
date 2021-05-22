/*
 * GlblInterrupt.c
 *
 *  Created on: May 22, 2021
 *      Author: Eng_Fawzi
 */

#include "GlblInterrupt_Interface.h"
void EnableAllInterrupts()
{
	SET_BIT(AVR_SREG_REG,I_BIT);
}
void DisableAllInterrupts()
{
	CLEAR_BIT(AVR_SREG_REG,I_BIT);
}
