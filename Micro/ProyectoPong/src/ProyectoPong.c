/*
===============================================================================
 Name        : Hardware.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include "Include.h"

extern struct_entradas 	ent[CANT_ENTRADAS];
extern struct_port		entradas[CANT_ENTRADAS];


int main(void)
{
	Inic();

	LCD_ESCRIBIR(0, 1);
	LCD_ESCRIBIR(0, 2);
	LCD_ESCRIBIR_TEXTO(4, 1, "PING PONG");
	LCD_ESCRIBIR_TEXTO(6, 2, "V2.0");

	while (1)
	{
		LCD_MOSTRAR_SCORE();
	//	Matriz_Llenar_Pantalla(); //Debug
	}

    return 0 ;
}
