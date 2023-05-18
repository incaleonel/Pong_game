/*
 * Teclado.c
 *
 *  Created on: 4 de dic. de 2016
 *      Author: Juani
 */

#include "Include.h"

struct_entradas ent[CANT_ENTRADAS] = { {0,0,-1} , {0,0,-1}, {0,0,-1}, {0,0,-1}, {0,0,-1}, {0,0,-1}, {0,0,-1} };
struct_port		entradas[CANT_ENTRADAS] = { {2,10}, {0,18}, {0,11}, {2,13}, {1,26}, {Exp_1}, {Exp_3} };

void Entradas_Init(void)
{
	uint8_t i;
	for(i = 0; i < CANT_ENTRADAS; i++)
		{
			Gpio_SetDir(entradas[i].port, entradas[i].pin, 0);
		}
}

void Entradas_Antirrebote (void)
{

	uint8_t est_act, i;

	for(i = 0; i < CANT_ENTRADAS; i++)
	{
		est_act = Gpio_GetPin(entradas[i].port, entradas[i].pin);

		if(est_act == ent[i].est_ant)
		{
			if(ent[i].cont >= CANT_VALIDA)
			{
				ent[i].est_valido = est_act;
			}
			else
			{
				ent[i].cont++;
			}
		}
		else
		{
			ent[i].est_ant = est_act;
		}
	}
}

