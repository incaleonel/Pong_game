/*
 * Teclado.h
 *
 *  Created on: 4 de dic. de 2016
 *      Author: Juani
 */

#ifndef TECLADO_H_
#define TECLADO_H_
#include "Regs.h"

#define CANT_ENTRADAS 7
#define	CANT_VALIDA 3

#define SW1 		ent[0].est_valido
#define SW2 		ent[1].est_valido
#define SW3 		ent[2].est_valido
#define SW4			ent[3].est_valido
#define SW5 		ent[4].est_valido
#define PLAYER_R	ent[5].est_valido
#define PLAYER_L	ent[6].est_valido
#define SW_ON 	0
#define SW_OFF 	1

typedef struct
{
	uint8_t cont, est_ant, est_valido;

}struct_entradas;

typedef struct
{
	uint8_t port, pin;

}struct_port;

void Entradas_Antirrebote (void);
void Entradas_Init(void);
void Posicion_Barra(uint8_t *Ubicacion);

#endif /* TECLADO_H_ */
