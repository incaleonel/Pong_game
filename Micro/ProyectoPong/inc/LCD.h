/*
 * INIC.h
 *
 *  Created on: 4 de oct. de 2016
 *      Author: Leonel
 */

#ifndef LCD_H_
#define LCD_H_

#include <Gpio.h>
#include <math.h>
#include "Include.h"


#define LCD_D4 0,5
#define LCD_D5 0,10
#define LCD_D6 2,4
#define LCD_D7 2,5
#define LCD_E 0,4
#define LCD_RS 2,6

void LCD_INIC(void);
void LCD_ESCRIBIR(uint8_t , uint8_t );
void LCD_DEMORA(void);
void LCD_ESCRIBIR_TEXTO(uint8_t posicion, uint8_t renglon, uint8_t *texto);
void LCD_ESCRIBIR_NUM(uint8_t posicion, uint8_t renglon, uint32_t num, uint8_t tam);
void LCD_MOSTRAR_SCORE(void);

#endif /* LCD_H_ */
