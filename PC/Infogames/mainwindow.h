#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qextserialport.h>
#include <qextserialenumerator.h>
#include "play.h"
#include <config.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();
        PLAY *juego;
        config * control;

private slots:
        void on_btn_iniciar_clicked();
        void on_actionControles_triggered();

private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
