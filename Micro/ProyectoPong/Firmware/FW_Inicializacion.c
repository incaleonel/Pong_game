/*
 * inic.c
 *
 *  Created on: 9 de ago. de 2016
 *      Author: leonel
 */

#include "Include.h"

uint8_t Ubicacion = 0;

void Inic (void)

{
	InitPLL();
	LCD_INIC();
	Inic_Matriz();
	Entradas_Init();
	InicSysTick();
	//ADC_Inic();
	UART0_INIT(9600, 8, 'N', 1);
}
