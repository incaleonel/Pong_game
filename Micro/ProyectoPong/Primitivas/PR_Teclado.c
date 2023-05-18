/*
 * PR_Teclado.c
 *
 *  Created on: 5 de dic. de 2016
 *      Author: Juani
 */

#include "Include.h"

extern struct_entradas ent[CANT_ENTRADAS];
extern struct_port entradas[CANT_ENTRADAS];
uint8_t Barra_Bandera, Barra_Bandera2;

void Posicion_Barra(uint8_t *Ubicacion)
{
	if(PLAYER_R == SW_ON && Barra_Bandera == 0)
	{
		if(*Ubicacion <13)
		{
			(*Ubicacion)++;
			Barra_Bandera = 1;
		}
	}

	if(PLAYER_R == SW_OFF)
	{
			Barra_Bandera = 0;
	}

	if(PLAYER_L == SW_ON && Barra_Bandera2 == 0)
	{
		if(*Ubicacion > 0)
		{
			(*Ubicacion)--;
			Barra_Bandera2 = 1;
		}
	}

	if(PLAYER_L == SW_OFF)
	{
			Barra_Bandera2 = 0;
	}


}


