/*
 * PR_Lcd.c
 *
 *  Created on: 9 de dic. de 2016
 *      Author: Juani
 */

#include "Include.h"

extern uint8_t PuntosPlayer1;
extern uint8_t PuntosPlayer2;
extern uint8_t FLAG;
uint8_t PuntosPlayer1_Anterior = -1;
uint8_t PuntosPlayer2_Anterior = -1;
uint8_t FirstTime = 0;

void LCD_MOSTRAR_SCORE(void)
{
		if(FLAG == 1 && FirstTime == 0)
			{
				LCD_ESCRIBIR(0, 1);
				LCD_ESCRIBIR(0, 2);
				LCD_ESCRIBIR_TEXTO(5, 1, "SCORE");
				LCD_ESCRIBIR_TEXTO(0, 2, "P1:");
				LCD_ESCRIBIR_TEXTO(9, 2, "P2:");
				FirstTime = 1;
			}

		if((PuntosPlayer1 != PuntosPlayer1_Anterior || PuntosPlayer2 != PuntosPlayer2_Anterior) && (FirstTime ==1))
			{
				LCD_ESCRIBIR_NUM(4, 2, PuntosPlayer1-'0', 3);
				LCD_ESCRIBIR_NUM(13, 2, PuntosPlayer2-'0', 3);
				PuntosPlayer1_Anterior = PuntosPlayer1;
				PuntosPlayer2_Anterior = PuntosPlayer2;
				PuntosPlayer1 %= 1000;
				PuntosPlayer2 %= 1000;
				PuntosPlayer1_Anterior %= 1000;
				PuntosPlayer2_Anterior %= 1000;
			}
}
