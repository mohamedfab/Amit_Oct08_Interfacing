/*
 * ExtInt_Private.h
 *
 *  Created on: May 22, 2021
 *      Author: Eng_Fawzi
 */

#ifndef MCAL_EXT_INT_INC_EXTINT_PRIVATE_H_
#define MCAL_EXT_INT_INC_EXTINT_PRIVATE_H_

#define EXTINT_GICR_REG			(*((volatile u8*)0x5B))
#define EXTINT_MCUCR_REG		(*((volatile u8*)0x55))
#define EXTINT_MCUCSR_REG		(*((volatile u8*)0x54))

#endif /* MCAL_EXT_INT_INC_EXTINT_PRIVATE_H_ */
