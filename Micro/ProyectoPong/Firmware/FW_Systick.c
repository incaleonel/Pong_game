/*
 * systick.c
 *
 *  Created on: 6 de set. de 2016
 *      Author: leonel
 */
#include "Include.h"

uint8_t Estado;
uint8_t Trama_Correcta;
uint8_t Posiciones[4] = {0,0,0,0};
extern uint8_t Posicion;
extern uint8_t Ubicacion;
uint32_t FILAS[8];

void InicSysTick ( void )
	{
		STRELOAD = (( STCALIB / 4) - 1)/4;						// Recarga cada 2.5 ms
		STCURR = 0;												// Cargando con cero limpio y provoco el disparo de una interrupcion
		STCTRL |=  ( ( 1 << 0 ) | ( 1 << 1 ) | ( 1 << 2 ) );	// Habilito el conteo, interrupción y PCLK
	}

void SysTick_Handler(void)
	{
		Entradas_Antirrebote();
		Posicion_Barra(&Ubicacion);
		Matriz_Barrido_General();
		Trama_Correcta = UART_TRAMA(Posiciones, &Estado);
		Matriz_Barrido_Objetos(Posiciones, &Trama_Correcta);
	}
