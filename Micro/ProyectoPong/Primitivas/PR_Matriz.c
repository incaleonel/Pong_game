/*
 * PR_Matriz.c
 *
 *  Created on: 5 de dic. de 2016
 *      Author: Juani
 */

#include "Include.h"

extern uint8_t bufferTx[2];
extern uint8_t bufferRx[12];
extern uint8_t Ubicacion;
extern uint8_t Fila[8][32];

uint8_t BX,BY, Barra1, Barra2;

void Printeo_coordenadas_Matriz(uint8_t X, uint8_t Y, uint8_t var)

{
		if(0 <= Y && Y <= 7)
		{
			if(0 <= X && X <= 7)
			{
				Fila[Y][X] = var;
			}
			if(8 <= X && X <= 15)
			{
				Fila[Y][X] = var;
			}
		}

		if(8 <= Y && Y <= 15)
		{
			if(0 <= X && X <= 7)
			{
				Fila[Y-8][31-X] = var;
			}
			if(8 <= X && X <= 15)
			{
				Fila[Y-8][31-X] = var;
			}
		}
}

void Matriz_Barrido_Objetos(uint8_t *Posiciones, uint8_t *Trama_Correcta)
{
	uint8_t i;

	if(*Trama_Correcta == 1)
	{
		Printeo_coordenadas_Matriz(BX,BY,0);

		for(i = 0; i < 16; i++)
		{
			Printeo_coordenadas_Matriz(i,0,0);
		}

		for(i = 0; i < 16; i++)
		{
			Printeo_coordenadas_Matriz(i,15,0);
		}

		Barra1 = Posiciones[0];
		BX = Posiciones[1];
		BY = Posiciones[2];
		Barra2 = Posiciones[3];

		Printeo_coordenadas_Matriz(BX,BY,1);
		Printeo_coordenadas_Matriz(Barra1,0,1);
		Printeo_coordenadas_Matriz(Barra1+1,0,1);
		Printeo_coordenadas_Matriz(Barra1+2,0,1);

		Printeo_coordenadas_Matriz(Ubicacion,15,1);
		Printeo_coordenadas_Matriz(Ubicacion+1,15,1);
		Printeo_coordenadas_Matriz(Ubicacion+2,15,1);

		*Trama_Correcta = 0;

	}
}

void Matriz_Llenar_Pantalla(void)
{
	int i,j;
	for(j = 0; j < 16; j++)
	{
		for(i = 0; i < 16; i++)
		{
			Printeo_coordenadas_Matriz(i, j, 1);
		}
	}
}
