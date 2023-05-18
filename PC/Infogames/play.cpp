#include "play.h"
#include "ui_play.h"

extern info *informacion;

PLAY::PLAY(QWidget *parent): QWidget(parent), ui(new Ui::PLAY)
{
    user.Nombre1 = "PLAYER1";
    user.Nombre2 = "PLAYER2";
    user.L_D ='D';
    user.L_I ='A';
    user.P_S ='L';

    if(informacion!=NULL)
    {
        user=*informacion;
    }

    ui->setupUi(this);
    serialport = new QextSerialPort("COM5",QextSerialPort::EventDriven);
    DIBUJO= new PLAYER(this);

    ui->GRILLA->addWidget(DIBUJO);

    TIME= new QTimer (this);
    enviar= new QTimer (this);

    connect(TIME,SIGNAL(timeout()),this,SLOT(move_ball()));
    connect(enviar,SIGNAL(timeout()),this,SLOT(Transmitir()));

    cargar_comandos();

    serialport->setPortName("COM5");
    serialport->setBaudRate(BAUD19200);
    serialport->setDataBits(DATA_8);
    serialport->setParity(PAR_NONE);
    serialport->setStopBits(STOP_1);
    connect(serialport,SIGNAL(readyRead()),this,SLOT(recibir()));
}

PLAY::~PLAY()
{
    delete ui;
}

void PLAY::keyPressEvent(QKeyEvent* event)
{
    std::string tecladerecha, teclaizquierda;
    int derecha, izquierda;

    tecladerecha = user.L_D.toStdString();
    derecha = (int) tecladerecha[0];

    teclaizquierda = user.L_I.toStdString();
    izquierda = (int) teclaizquierda[0];

    if(event->key() == izquierda || event->key() == (izquierda-32))
    {
        DIBUJO->mover(1,-20);
        event->accept();
        update();
    }

    if(event->key() == derecha || event->key() == (derecha-32))
    {
        DIBUJO->mover(1,20);
        event->accept();
        update();
    }
}

void PLAY::move_ball()
{
    puntaje(DIBUJO->puntos_player1,DIBUJO->puntos_player2);
    DIBUJO->pelota();
    update();
}
void PLAY::Transmitir(){

    char buff[19];
    bool Puerto_Abierto = serialport->open(QextSerialPort::ReadWrite);

    if(Puerto_Abierto == true)
    {
        DIBUJO->pantalla_matriz(buff);
        serialport->write(buff);
    }

    else
    {
      TIME->stop();
      QMessageBox::information(this,"FATAL ERROR","No se pudo abrir el puerto");
      QCoreApplication::quit();
    }

}

char buff;

void PLAY::recibir()
{
    serialport->getChar(&buff);
    DIBUJO->procesar_player1(&buff);
    update();
}

void PLAY::on_btn_INIC_clicked()
{
    TIME->start(100);
    enviar->start(10);
}

void PLAY::puntaje(double b,double a)
{
    ui->LCDPLAYER1->display(a);
    ui->LCDPLAYER2->display(b);
}

void PLAY::generarstring(QString* palabra,int a)
{
    switch(a)
    {
        case 1:
                *palabra= "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#0000FF;\">" + *palabra + "</span></p></body></html>";
        break;

        case 2:
                *palabra= "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#0000FF;\">" + *palabra + "</span></p></body></html>";
        break;
    }
}

void PLAY::cargar_comandos()
{
    generarstring(&user.Nombre1,1);
    ui->label_p1->setText(user.Nombre1);
    generarstring(&user.Nombre2,2);
    ui->label_p2->setText(user.Nombre2);
}

void PLAY::on_PAUSA_clicked()
{
    TIME->stop();
}
