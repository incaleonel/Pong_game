#include "player.h"
#include <QPainter>

PLAYER::PLAYER(QWidget *parent) : QWidget(parent)
{
    x1=0;
    y1=0;

    x2 = 0;
    y2 = 300;

    ball_x = 160;
    ball_y = 160;

    dx=20;
    dy=20;

    puntos_player1=0;
    puntos_player2=0;
}

void PLAYER::procesar_player1(char  *pos)
{
    x2=(*pos)*20;
}

void PLAYER::pantalla_matriz(char *matriz)
{
    int i;
    for(i=0;i<=15;i++)
    {
        if(x1/20==i)
        {
            matriz[0]='X';
            matriz[1]='1';
            matriz[2]=i+'0';
        }

        if(ball_x/20==i)
        {
            matriz[3]='B';
            matriz[4]='X';
            matriz[5]=i+'0';
        }
        if(ball_y/20==i)
        {
            matriz[6]='B';
            matriz[7]='Y';
            matriz[8]=i+'0';
        }
            matriz[9]='X';
            matriz[10]='2';
            matriz[11]='0';//i+'0';

            matriz[12] = 'P';
            matriz[13] = '1';
            matriz[14] = puntos_player2+'0';

            matriz[15] = 'P';
            matriz[16] = '2';
            matriz[17] = puntos_player1+'0';
            matriz[18]= '\0';
    }
}


void PLAYER::paintEvent(QPaintEvent* )
{
    QPainter PINTAR(this);
    int i;

    PINTAR.setBrush(Qt::black);
    PINTAR.drawRect(0,0,LIMIT,LIMIT);

    PINTAR.setBrush(Qt::red);
    PINTAR.drawEllipse(ball_x,ball_y,TAM_PIXEL,TAM_PIXEL);

    for(i=0;(i*20)<=40;i++)
    {
       PINTAR.setBrush(Qt::blue);
       PINTAR.drawEllipse(x1+(i*20),y1,TAM_PIXEL,TAM_PIXEL);
    }

    for(i=0;(i*20)<=40;i++)
    {
        PINTAR.setBrush(Qt::blue);
        PINTAR.drawEllipse(x2+(i*20),y2,TAM_PIXEL,TAM_PIXEL);
    }
}

void PLAYER::mover(int Cual, int a)
{
    if(Cual == 1)
    {
        if(((x1+a)>=0)&&((x1+a)<=260))
        {
                x1+=a;
        }
    }
}

void PLAYER::pelota()
{
    ball_x+=dx;
    ball_y+=dy;

    if(dx>0)
    {
        if(ball_toca_palito1_x_izq)
        {
            dy=-dy;
        }

        if(ball_toca_esq_p1_x_izq)
        {
            dy=-dy;
            dx=-dx;
        }

        if(ball_toca_palito2_x_izq)
        {
            dy=-dy;
        }

        if(ball_toca_esq_p2_x_izq)
        {
            dy=-dy;
            dx=-dx;
        }
    }

    if(dx<0)
    {
        if(ball_toca_palito1_x_der)
        {
            dy=-dy;
        }

        if(ball_toca_esq_p1_x_der)
        {
            dy=-dy;
            dx=-dx;
        }

        if(ball_toca_palito2_x_der)
        {
            dy=-dy;
        }
        if(ball_toca_esq_p2_x_der)
        {
            dy=-dy;
            dx=-dx;
        }
    }

    if((ball_x+dx==-20)||(ball_x+dx==LIMIT)) {dx=-dx;}

    if(((ball_x+dx==x2)||(ball_x+dx==x2+80))&&((ball_y+dy)==y2))
    {
        dy=-dy;
        dx=-dx;
    }

    if((ball_y<0))
    {
        puntos_player1++;
        ball_x=160;
        ball_y=160;
    }

    if((ball_y>=LIMIT))
    {
        puntos_player2++;
        ball_x=160;
        ball_y=160;
    }
}

