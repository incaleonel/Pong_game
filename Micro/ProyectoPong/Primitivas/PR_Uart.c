/*
 * PR_Uart.c
 *
 *  Created on: 5 de dic. de 2016
 *      Author: Juani
 */

#include "Include.h"

uint8_t Ubicacion_Anterior = -1;
extern uint8_t Ubicacion;
extern uint8_t bufferRx[18];
uint8_t PuntosPlayer1 = 0;
uint8_t PuntosPlayer2 = 0;
uint8_t FLAG = 0;

uint8_t UART_TRAMA(uint8_t *Posiciones,uint8_t *Estado)
{
	uint32_t buff;
	uint8_t i = 0;

	switch(*Estado)
	{

	case 1:
			buff = bufferRx[0];
			if(buff == 'X')
			{
				*Estado = 2;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 2:
			buff = bufferRx[1];
			if(buff == '1')
			{
				*Estado = 3;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 3:
			buff = bufferRx[2];
			*Posiciones = buff - '0';
			*Estado = 4;
	break;

	case 4:
			buff = bufferRx[3];
			if(buff == 'B')
			{
				*Estado = 5;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 5:
			buff = bufferRx[4];
			if(buff == 'X')
			{
				*Estado = 6;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 6:
			buff = bufferRx[5];
			*(Posiciones + 1) = buff- '0';
			*Estado = 7;
	break;

	case 7:
			buff = bufferRx[6];
			if(buff == 'B')
			{
				*Estado = 8;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 8:
			buff = bufferRx[7];
			if(buff == 'Y')
			{
				*Estado = 9;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 9:
			buff = bufferRx[8];
			*(Posiciones + 2) = buff - '0';
			*Estado = 10;
	break;

	case 10:
			buff = bufferRx[9];
			if(buff == 'X')
			{
				*Estado = 11;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 11:
			buff = bufferRx[10];
			if(buff == '2')
			{
				*Estado = 12;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 12:
			buff = bufferRx[11];
			*(Posiciones + 3) = buff - '0';
			*Estado = 13;
	break;

	case 13:
			buff = bufferRx[12];

			if(buff == 'P')
			{
				*Estado = 14;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 14:

			buff = bufferRx[13];

			if(buff == '1')
			{
				*Estado = 15;
			}
			else
			{
				*Estado = 1;
			}
			break;

	case 15:

			buff = bufferRx[14];
			PuntosPlayer1 = buff;
			*Estado = 16;
	break;

	case 16:
			buff = bufferRx[15];

			if(buff == 'P')
			{
				*Estado = 17;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 17:

			buff = bufferRx[16];

			if(buff == '2')
			{
				*Estado = 18;
			}
			else
			{
				*Estado = 1;
			}
	break;

	case 18:

			buff = bufferRx[17];
			PuntosPlayer2 = buff;

			if(Ubicacion != Ubicacion_Anterior)
			{
				UART0_ESCRIBIR(&Ubicacion,1);
				Ubicacion_Anterior = Ubicacion;
			}

			*Estado = 1;
			FLAG = 1;

	break;

	default:
			*Estado = 1;
	break;

	}
	i++;
	i  %= 50;
	return FLAG;
}
