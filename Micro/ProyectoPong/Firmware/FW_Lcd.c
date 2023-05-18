/*
 * LCD.c
 *
 *  Created on: 5 de dic. de 2016
 *      Author: Juani
 */


#include "Include.h"

void LCD_INIC(void)
{
	uint8_t i;

	Gpio_SetFunc(LCD_D4,0);
	Gpio_SetFunc(LCD_D5,0);
	Gpio_SetFunc(LCD_D6,0);
	Gpio_SetFunc(LCD_D7,0);
	Gpio_SetFunc(LCD_E,0);
	Gpio_SetFunc(LCD_RS,0);

	Gpio_SetDir(LCD_D4,1);
	Gpio_SetDir(LCD_D5,1);
	Gpio_SetDir(LCD_D6,1);
	Gpio_SetDir(LCD_D7,1);
	Gpio_SetDir(LCD_E,1);
	Gpio_SetDir(LCD_RS,1);

	for(i = 0; i < 3; i++)
	{
		Gpio_SetPin(LCD_E,0);
		LCD_DEMORA();
		Gpio_SetPin(LCD_D4,1);
		Gpio_SetPin(LCD_D5,1);
		Gpio_SetPin(LCD_D6,0);
		Gpio_SetPin(LCD_D7,0);
		Gpio_SetPin(LCD_RS,0);
		Gpio_SetPin(LCD_E,1);
		LCD_DEMORA();
		Gpio_SetPin(LCD_E,0);
	}

	Gpio_SetPin(LCD_E,0);
	LCD_DEMORA();
	Gpio_SetPin(LCD_D4,0);
	Gpio_SetPin(LCD_D5,1);
	Gpio_SetPin(LCD_D6,0);
	Gpio_SetPin(LCD_D7,0);
	Gpio_SetPin(LCD_RS,0);
	Gpio_SetPin(LCD_E,1);
	LCD_DEMORA();
	Gpio_SetPin(LCD_E,0);

	LCD_ESCRIBIR(0, 0x28);	// DL = 0: 4 bits de datos
							// N = 1 : 2 lineas
							// F = 0 : 5x7 puntos

	LCD_ESCRIBIR(0, 0x08);	// D = 0 : display OFF
							// C = 0 : Cursor OFF
							// B = 0 : Blink OFF

	LCD_ESCRIBIR(0, 0x01); 	// clear display

	LCD_ESCRIBIR(0, 0x06);	// I/D = 1 : Incrementa puntero
							// S = 0 : NO Shift Display

	LCD_ESCRIBIR(0, 0x0C);	// D = 1 : display ON
							// C = 0 : Cursor OFF
							// B = 0 : Blink OFF
}

void LCD_ESCRIBIR(uint8_t control, uint8_t dato)
{
	Gpio_SetPin(LCD_RS,control);
	Gpio_SetPin(LCD_E,0);
	Gpio_SetPin(LCD_D7,dato & (1<<7));
	Gpio_SetPin(LCD_D6,dato & (1<<6));
	Gpio_SetPin(LCD_D5,dato & (1<<5));
	Gpio_SetPin(LCD_D4,dato & (1<<4));
	Gpio_SetPin(LCD_E,1);
	LCD_DEMORA();
	Gpio_SetPin(LCD_E,0);

	Gpio_SetPin(LCD_D7,dato & (1<<3));
	Gpio_SetPin(LCD_D6,dato & (1<<2));
	Gpio_SetPin(LCD_D5,dato & (1<<1));
	Gpio_SetPin(LCD_D4,dato & (1<<0));
	Gpio_SetPin(LCD_E,1);
	LCD_DEMORA();
	Gpio_SetPin(LCD_E,0);
}

void LCD_ESCRIBIR_TEXTO(uint8_t posicion, uint8_t renglon, uint8_t *texto)
{
	uint32_t i;

	switch(renglon)
	{
		case 1:
				LCD_ESCRIBIR(0, posicion + 0x80);
		break;

		case 2:
				LCD_ESCRIBIR(0, posicion + 0xc0);
		break;

		default:
				LCD_ESCRIBIR(0, posicion + 0x80);
		break;
	}

	for (i = 0; *(texto+i) != 0; i++)
	{
		LCD_ESCRIBIR(1, *(texto+i));
	}
}

void LCD_ESCRIBIR_NUM(uint8_t posicion, uint8_t renglon, uint32_t num, uint8_t tam)

{
	uint32_t dato = 0;
	uint32_t j;

	switch(renglon)
	{
		case 1:
				LCD_ESCRIBIR(0, posicion + 0x80);
		break;

		case 2:
				LCD_ESCRIBIR(0, posicion + 0xc0);
		break;

		default:
				LCD_ESCRIBIR(0, posicion + 0x80);
		break;
	}

	for (j = 0; j < tam; j++)
	{
		dato = (int)(num / pow(10, tam-j-1))%(int)10;
		LCD_ESCRIBIR(1, dato + '0');
	}
}

void LCD_DEMORA(void)
{
	uint32_t i;
	for(i=0;i<100000;i++){}
}
