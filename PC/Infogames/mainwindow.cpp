#include "mainwindow.h"
#include "ui_mainwindow.h"

unsigned int valor;

info *informacion=NULL;

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_iniciar_clicked()
{
    juego = new PLAY();
    juego->chequear = valor;
    juego->show();
    close();
}

void MainWindow::on_actionControles_triggered()
{
    control = new config();
    control->show();
    valor=1;
}
