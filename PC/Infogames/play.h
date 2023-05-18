#ifndef PLAY_H
#define PLAY_H

#include <QWidget>
#include "player.h"
#include <QTimer>
#include <QKeyEvent>
#include <QMediaPlayer>
#include <qextserialport.h>
#include <qextserialenumerator.h>
#include <config.h>
#include <qmessagebox.h>
#include <qlcdnumber.h>
#include <qstring.h>
namespace Ui {
class PLAY;
}

class PLAY : public QWidget
{
    Q_OBJECT

public:
            explicit PLAY(QWidget *parent = 0);
            void keyPressEvent(QKeyEvent* event);
            ~PLAY();
            unsigned int chequear;
            info user;
            void generarstring(QString*,int);
            QTimer *TIME;

private slots:
            void move_ball();

            void on_btn_INIC_clicked();

            void Transmitir();

            void recibir();

            void puntaje(double,double);

            void cargar_comandos();

            void on_PAUSA_clicked();

private:
            Ui::PLAY *ui;
            PLAYER *DIBUJO;
            QMediaPlayer *fondo;
            QTimer *enviar;
            QextSerialPort *serialport;
};

#endif // PLAY_H
