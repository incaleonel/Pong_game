#ifndef PLAYER_H
#define PLAYER_H

#include <QWidget>
#include <QMediaPlayer>
#include <windows.h>



#define LIMIT 320
#define TAM_PIXEL 20
#define ball_toca_palito1_x_izq ((ball_x+dx>=x1+20)&&(ball_x+dx<=x1+60))&&((ball_y+dy)==y1)
#define ball_toca_esq_p1_x_izq (ball_x+dx==x1)&&(ball_y+dy==y1)
#define ball_toca_palito2_x_izq ((ball_x+dx>=x2+20)&&(ball_x+dx<=x2+60))&&((ball_y+dy)==y2)
#define ball_toca_esq_p2_x_izq (ball_x+dx==x2)&&(ball_y+dy==y2)
#define ball_toca_palito1_x_der ((ball_x+dx>=x1-20)&&(ball_x+dx<=x1+20))&&(ball_y+dy==y1)
#define ball_toca_esq_p1_x_der  (ball_x+dx==x1+40)&&(ball_y+dy==y1)
#define ball_toca_palito2_x_der ((ball_x+dx>=x2-20)&&(ball_x+dx<=x2+20))&&(ball_y+dy==y2)
#define ball_toca_esq_p2_x_der  (ball_x+dx==x2+40)&&(ball_y+dy==y2)

class PLAYER : public QWidget
{
    Q_OBJECT

public:
        void procesar_player1(char *pos);
        explicit PLAYER(QWidget *parent = 0);
        void mover(int,int);
        void pelota();
        void pantalla_matriz(char *matriz);
        void player1(char*);
        double puntos_player1,puntos_player2;

protected:
        void paintEvent(QPaintEvent * event);

private:
          int x1, x2,ball_x,dx;
          int y1, y2,ball_y,dy;

signals:

public slots:
};

#endif // PLAYER_H
