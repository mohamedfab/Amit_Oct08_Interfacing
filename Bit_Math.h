/************************************
 * Bit_Math.h
 *  Created on: Apr 24, 2021
 *  Author: Eng_Fawzi
 ************************************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT_NO)  		 (REG|=(1<<BIT_NO))
#define CLEAR_BIT(REG,BIT_NO) 		 (REG&=~(1<<BIT_NO))
#define TOGGLE_BIT(REG,BIT_NO) 		 (REG^=(1<<BIT_NO))
#define CHECK_BIT(REG,BIT_NO)		 ((REG >> BIT_NO)&0x01)

#endif /* BIT_MATH_H_ */
