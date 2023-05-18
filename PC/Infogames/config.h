#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include <qextserialport.h>
#include <qextserialenumerator.h>
#include "ui_config.h"
#include <qmessagebox.h>
#include <QtSerialPort/qserialportinfo.h>
#include <QList>
#include <stdio.h>
#include <string.h>

#define ON 1;
#define OFF 0;

typedef struct{
    QString Nombre1;
    QString Nombre2;
    QString L_D;
    QString L_I;
    QString P_S;
    int puntaje1;
    int puntaje2;
}info;

namespace Ui {
class config;
}

class config : public QWidget
{
    Q_OBJECT

public:
        explicit config(QWidget *parent = 0);
        ~config();
        info usuario;

private slots:
        void on_btn_aplicar_clicked();
        void on_comboBox_activated(int index);
        void enumerar();

private:
        Ui::config *ui;
        QString portname;

};

#endif // CONFIG_H
