/*
 * Mcu_Hw.h
 *
 *  Created on: Oct 13, 2022
 *      Author: sheha
 */
 
 #ifndef MCU_HW_H_
#define MCU_HW_H_
/***********************************************/
/************FILE DESCRIPTION*******************/
/***********************************************
 * 	\file  	 : Mcu_Hw.c
 * 	\breif 	 : Registers defining
 *
 * 	\details : Header file for registers defination
 */

/***********************************************/
/************INCLUDES***************************/
/***********************************************/
#include "Std_Types.h"

/***********************************************/
/*******GLOBAL DATA PROTOTYPES*********/
/***********************************************/

/***********************************************/
/**********GLOBAL DATATYPES AND STRUCTURES******/
/***********************************************/
typedef struct 
{
	uint32 VECACT   	:8;
	uint32 						:3; //reserved
	uint32 RETBASE 	 :1;
	uint32 VECPEND		:8;
	uint32 						:2; //reserved
	uint32 ISRPEND		:1;
	uint32 ISRPRE	 		:1;
	uint32 						:1; //reserved
	uint32 PENDSTCLR 	:1;
	uint32 PENDSTSET	:1;
	uint32 UNPENDSV		:1;
	uint32 PENDSV			:1;
	uint32 						:2; //reserved
	uint32 NMISET			:1;
}INTCTRL_BF;  //INTCTRL Register Bit Field	

typedef union 
{
	uint32 R;
	INTCTRL_BF B;
}INTCTRL_Tag;

// INTCTRL_Tag.R=0x55   Register accsess
// INTCTRL_Tag.B.RETBASE =0xA    Bit acess
/***********************************************/
/************GLOBAL MACROS**********************/
/***********************************************/
#define CORTEXM4_PERI_BASE_ADDRESS         0xE000E000
#define APINT 														 *(volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C)	
#define INTCTRL 													 *(volatile INTCTRL_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04)
#endif /* MCU_HW_H_*/
