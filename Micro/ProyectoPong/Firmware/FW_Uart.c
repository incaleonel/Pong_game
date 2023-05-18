/*
 * UART.c
 *
 *  Created on: 12 de ago. de 2016
 *      Author: leonel
 */

#include "Include.h"

#define TOPE_BUFFER_TX 2
#define TOPE_BUFFER_RX 18
uint8_t tx_ready = 0;
uint8_t bufferTx[TOPE_BUFFER_TX];
uint8_t bufferRx[TOPE_BUFFER_RX];
int TxIn,RxIn,TxOut,RxOut;
extern uint8_t EST_VALIDO;
uint8_t anterior;
uint8_t Valor;

void UART0_INIT(int32_t BaudRate, int32_t Nbits, int32_t Parity, int32_t StopBit)
{

Gpio_SetFunc(0,2,1);
Gpio_SetFunc(0,3,1);
PCONP |= 1<<3;
PCLKSEL0 &= ~(1<<6);
PCLKSEL0 &= ~(1<<7);

switch(Nbits)
{
 case 5:
	 U0LCR &= ~(3<<0);
	 break;

 case 6:
	 U0LCR |= (1<<0);
	 U0LCR &= ~(1<<1);
	 break;

 case 7:
	 U0LCR &= ~(1<<0);
	 U0LCR |= (1<<1);
	 break;

 case 8:
	 U0LCR |= (3<<0);
	 break;

 default:
	break;
}

switch(Parity)
{
 case 'N':
	 U0LCR &= ~(1<<3);
	 break;

 case 'O':
	 U0LCR |= (1<<3);
	 U0LCR &= ~(3<<4);

	 break;

 case 'E':
	 U0LCR |= (1<<3);
	 U0LCR |= (1<<4);
	 U0LCR &= ~(1<<5);
	 break;

 case 1:
	 U0LCR |= (1<<3);
	 U0LCR &= ~(1<<4);
	 U0LCR |= (1<<5);
	 break;

 case 0:
	 U0LCR |= (1<<3);
	 U0LCR |= (3<<4);

	 break;

 default:
	break;
}

switch(StopBit)
{
 case 1:
	 U0LCR &= ~(1<<2);
	 break;

 case 2:
	 U0LCR |= (1<<2);
	 break;

 default:
	break;
}

U0LCR &= ~(1<<6);
U0LCR |= (1<<7);

U0LCR = 0x83;

U0DLL = 81;
U0DLM = 0;

U0LCR &=~(1<<7);
U0IER = 0x0f;
ISER0 |= (1<<5);

}

void UART0_RX(void)
{
	uint8_t dato= U0RBR;
	PUSH_RX (dato);
}

void UART0_TX(void)
{

	int8_t dato;
	dato = POP_TX();

	if(dato >=0)
	{

		U0THR = (uint8_t) dato;

	}

	else
	{
		tx_ready = 0;

	}
}

void UART0_IRQHandler(void)
{
	uint8_t temp;
	//uint8_t errornumber;

	do{

		temp = U0IIR;

		switch((temp>>1)& 0x03)
		{
			case 2:
					UART0_RX();
					break;
			case 1:
					UART0_TX();
					break;

			case 3:
					//errornumber = U0LSR;
					break;// error

			default:
			break;
		}

	}while(!(temp & 0x01));

}

int32_t UART0_LEER(void)
{
	int8_t temp = POP_RX();
	return temp;
}

void UART0_ESCRIBIR (uint8_t *datos, uint8_t longitud)
{
	int i;

	for(i = 0; i< longitud; i++)
	{
		PUSH_TX (datos[i]);
	}

	if(tx_ready == 0)
	{
		U0THR = (uint8_t) POP_TX();
		tx_ready = 1;
	}
}

void PUSH_TX (uint8_t dato)
{
	bufferTx[ TxIn ] = dato;
	TxIn ++;
	TxIn %= TOPE_BUFFER_TX;
}

int8_t POP_RX (void)
{
	uint8_t dato = -1;

	if (RxIn != RxOut)
	{
		dato = (uint8_t) bufferRx[RxOut];
		RxOut ++;
		RxOut %= TOPE_BUFFER_RX;
	}

	return dato;

}

int8_t POP_TX(void)

{
	int8_t dato = -1;

	if (TxIn != TxOut)
	{
		dato = (uint8_t) bufferTx[TxOut];
		TxOut ++;
		TxOut %= TOPE_BUFFER_TX;
	}
	return dato;
}

void PUSH_RX(uint8_t dato)
{
	 bufferRx[ RxIn ] = dato;
	 RxIn ++;
	 RxIn %= TOPE_BUFFER_RX;
}



