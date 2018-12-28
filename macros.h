/*
 * macros.h
 *
 *  Created on: 7/2018
 *      Author: Abdullah Abdelhakeem
	*	function like macros
	*	object like macro
 */

#ifndef MACROS_H_
#define MACROS_H_

#define SET_BIT(Reg,Pin)  Reg|=(1<<Pin)
#define CLEAR_BIT(Reg,Pin)  Reg&=~(1<<Pin)
#define TOGGLE_BIT(Reg,Pin)  Reg^=(1<<Pin)
#define GET_BIT(Reg,Pin)    ((Reg>>Pin)&1)


#endif /* MACROS_H_ */
