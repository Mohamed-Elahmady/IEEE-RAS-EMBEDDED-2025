/* 
 * File:   main.h
 * Author: mohammedel-ahmady
 *
 * Created on June 26, 2025, 7:59 PM
 */

/******************* Section 0 : File Guard *******************/

#ifndef MAIN_H
#define	MAIN_H

/******************* Section 1 : Includes *******************/

#include "../ECUAL_Layer/ECUAL_INIT.h"

/******************* Section 2 : Macros Declarations *******************/

#define F_CPU 8000000UL

/******************* Section 3 : Macros Functions Declarations *******************/



/******************* Section 4 : User Defined Data Types & Variables Declarations *******************/

extern GPIO_Led led1;
extern GPIO_Led led2;
extern GPIO_Led led3;
extern GPIO_Pin_CFG seg_chan1;
extern GPIO_Pin_CFG seg_chan2;
extern GPIO_Segment seg1;

extern GPIO_Keypad keypad1;
extern Chr_Lcd_4Bit lcd1;
extern Chr_Lcd_8Bit lcd2;

/******************* Section 5 : Software Interfaces Declarations (APIs) *******************/

void Application_Init(void);


#endif	/* MAIN_H */

