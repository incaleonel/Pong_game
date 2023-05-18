/*
 * Matriz.h
 *
 *  Created on: 11 de nov. de 2016
 *      Author: Leonel
 */

#ifndef MATRIZ_H_
#define MATRIZ_H_

#define Exp_0 2,7
#define Exp_1 1,29
#define Exp_2 4,28
#define Exp_3 1,23
#define Exp_4 1,20
#define Exp_5 0,19
#define Exp_6 3,26
#define Exp_7 1,25
#define Exp_8 1,22
#define Exp_9 1,19
#define Exp_10 0,20
#define Exp_11 3,25
#define Exp_12 1,27
#define Exp_13 1,24
#define Exp_14 1,21
#define Exp_15 1,18
#define Exp_16 2,8
#define Exp_17 2,12

#define FILA0 Exp_15
#define FILA1 Exp_14
#define FILA2 Exp_13
#define FILA3 Exp_12
#define FILA4 Exp_11
#define FILA5 Exp_10
#define FILA6 Exp_9
#define FILA7 Exp_8

#define MATRIXRESET Exp_4
#define MATRIXCLOCK Exp_5

void Inic_Matriz();
void Matriz_Barrido_General();
void Printeo_coordenadas_Matriz(uint8_t X, uint8_t Y, uint8_t var);
void Matriz_Barrido_Objetos(uint8_t *Posiciones, uint8_t *Trama_Correcta);
void Matriz_Llenar_Pantalla(void);


#endif /* MATRIZ_H_ */
