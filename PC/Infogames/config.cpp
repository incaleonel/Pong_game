#include "config.h"
#include <iostream>

extern info *informacion;

config::config(QWidget *parent) : QWidget(parent),ui(new Ui::config)
{
     ui->setupUi(this);
     enumerar();

     usuario.Nombre1 = "PLAYER1";
     usuario.Nombre2 = "PLAYER2";
     usuario.L_D ='D';
     usuario.L_I ='A';
     usuario.P_S ='L';
     usuario.puntaje1 = 0;
     usuario.puntaje2 = 0;
}

config::~config()
{
    delete ui;
}

void config::on_btn_aplicar_clicked()
{

    if(!(ui->LE_nombre1->text().isEmpty()))
    {
        usuario.Nombre1 = ui->LE_nombre1->text();
    }

    if(!(ui->LE_der->text().isEmpty()))
    {
        usuario.L_D = ui->LE_der->text();
    }

    if(!(ui->LE_izq->text().isEmpty()))
    {
        usuario.L_I = ui->LE_izq->text();
    }

    if(!(ui->LE_nombre2->text().isEmpty()))
    {
        usuario.Nombre2 = ui->LE_nombre2->text();
    }

    enumerar();

    informacion = new info(usuario);
}

void config::enumerar()
{
   int i;
    ui->comboBox->clear();

    QList <QextPortInfo> ports= QextSerialEnumerator::getPorts();
    for(i=0;i<ports.size();i++)
    {
        ui->comboBox->addItem(ports.at(i).friendName,ports.at(i).portName);
    }
}

void config::on_comboBox_activated(int index)
{

    portname = ui->comboBox->itemData(index).toString();
}
