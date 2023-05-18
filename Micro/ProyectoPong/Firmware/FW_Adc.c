/*
 * FW_adc.c
 *
 *  Created on: 21/10/2013
 *      Author: Gos
 */
#include "Include.h"

#define ADC_CANT_VALIDA 5
uint8_t Posicion;
uint32_t resultadoADC = 0;
uint8_t EST_ACT;
uint8_t EST_ANT;
uint8_t EST_VALIDO;
uint32_t CICLOS = 0;

void ADC_Inic(void){

	PCONP |= 1<<12;				//1.- Activo la alimentacion del dispositivo desde el registro PCONP:
	PCLKSEL0 &= ~(0x03<<24);	//2.- Selecciono el clock del ADC como 25MHz:
	AD0CR |= 0x00000100;		//3.- Y el divisor como 1, para muestrear a 200kHz:
	Gpio_SetFunc(1,31,3);		//4.- Configuro los pines del ADC0 // ADC0.5 : P1[31]->PINSEL3: 30:31
	AD0INTEN &= 0xFFFFFF20;		//5.- ACTIVO LAS INTERRUPCIONES GLOBALES Y ADC0CH5:
	ISER0 |= (0x01 << 22);		// HABILITO INT DEL ADC EN NVIC
	AD0CR |= 0x00000020;		//6.- Selecciono que voy a tomar muestras del canal AD0.5:
	AD0CR |= 1<<21;				//7.- Activo el ADC (PDN = 1):
	AD0CR &= ~(0x0F<<24);		//8.- Disparo el ADC para que muestree solo, con BURST = 1 y START = 000:
	AD0CR |= 1<<16;
}

void ADC_IRQHandler(void)
{
	static uint8_t contador = 0;
	static uint16_t resultadoParcial = 0;
	static uint32_t acumulador = 0;

	resultadoParcial = (AD0GDR >> 4) & (0x0000FFFF);
	acumulador += resultadoParcial;
	contador ++;

	if(contador == 120)
	{
		resultadoADC = acumulador/120;// >> 7;
		contador = 0;
		acumulador = 0;
		Posicion = ADC_Posicion(resultadoADC);
	}

	AD0CR |= 1 << 24;
	AD0CR &= ~(1<<25);
	AD0CR &= ~(1<<26);
}

uint8_t ADC_Posicion(uint32_t ADC)
{
	int i=0;
	uint32_t valor;

	for(i = 0, valor = 0; i < 14; i++, valor= valor +293)
	{
		if(valor <= ADC && ADC <= (valor+293))
		{
			return (13-i);
		}
	}
	return 0;
}

void ADC_Antirrebote(void)
{
	uint8_t cont;
	EST_ACT = Posicion;

	if(EST_ACT==EST_ANT)
	{
		if(cont >= ADC_CANT_VALIDA)
		{
			EST_VALIDO = EST_ACT;
		}
		else
		{
			cont++;
		}
	}

	else
	{
		cont=0;
	}

	EST_ANT=EST_ACT;
}

