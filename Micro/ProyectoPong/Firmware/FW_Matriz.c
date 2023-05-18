/*
 * Matriz.c
 *
 *  Created on: 11 de nov. de 2016
 *      Author: Leonel
 */

#include "Include.h"

uint8_t Fila[8][32];
uint8_t indice;


void Inic_Matriz()

{
	uint8_t i, j;

	Gpio_SetFunc(FILA0,0);
	Gpio_SetFunc(FILA1,0);
	Gpio_SetFunc(FILA2,0);
	Gpio_SetFunc(FILA3,0);
	Gpio_SetFunc(FILA4,0);
	Gpio_SetFunc(FILA5,0);
	Gpio_SetFunc(FILA6,0);
	Gpio_SetFunc(FILA7,0);
	Gpio_SetFunc(MATRIXCLOCK,0);
	Gpio_SetFunc(MATRIXRESET,0);

	Gpio_SetDir(FILA0,1);
	Gpio_SetDir(FILA1,1);
	Gpio_SetDir(FILA2,1);
	Gpio_SetDir(FILA3,1);
	Gpio_SetDir(FILA4,1);
	Gpio_SetDir(FILA5,1);
	Gpio_SetDir(FILA6,1);
	Gpio_SetDir(FILA7,1);
	Gpio_SetDir(MATRIXCLOCK,1);
	Gpio_SetDir(MATRIXRESET,1);

	Gpio_SetPin(FILA0,0);
	Gpio_SetPin(FILA1,0);
	Gpio_SetPin(FILA2,0);
	Gpio_SetPin(FILA3,0);
	Gpio_SetPin(FILA4,0);
	Gpio_SetPin(FILA5,0);
	Gpio_SetPin(FILA6,0);
	Gpio_SetPin(FILA7,0);
	Gpio_SetPin(MATRIXRESET,1);
	Gpio_SetPin(MATRIXRESET,0);

	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 32; j++)
		{
			Fila[i][j] = 0;
		}
	}

}

void Matriz_Barrido_General()

{
	uint8_t i;

	if(indice>31)
	{
		indice=0;
	}

	Gpio_SetPin(MATRIXRESET,1);
	Gpio_SetPin(MATRIXRESET,0);

	for(i = 0; i <= indice; i++)
	{
		Gpio_SetPin(FILA0,0);
		Gpio_SetPin(FILA1,0);
		Gpio_SetPin(FILA2,0);
		Gpio_SetPin(FILA3,0);
		Gpio_SetPin(FILA4,0);
		Gpio_SetPin(FILA5,0);
		Gpio_SetPin(FILA6,0);
		Gpio_SetPin(FILA7,0);

		Gpio_SetDir(MATRIXCLOCK,1);
		Gpio_SetDir(MATRIXCLOCK,0);
	}

	Gpio_SetPin(FILA0,Fila[0][indice]);
	Gpio_SetPin(FILA1,Fila[1][indice]);
	Gpio_SetPin(FILA2,Fila[2][indice]);
	Gpio_SetPin(FILA3,Fila[3][indice]);
	Gpio_SetPin(FILA4,Fila[4][indice]);
	Gpio_SetPin(FILA5,Fila[5][indice]);
	Gpio_SetPin(FILA6,Fila[6][indice]);
	Gpio_SetPin(FILA7,Fila[7][indice]);

indice++;

}

