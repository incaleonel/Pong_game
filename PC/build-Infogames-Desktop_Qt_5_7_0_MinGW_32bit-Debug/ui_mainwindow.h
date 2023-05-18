/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCOM1;
    QAction *actionCOM2;
    QAction *actionCOM5;
    QAction *actionControles;
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_iniciar;
    QPushButton *btn_salir;
    QMenuBar *menuBar;
    QMenu *menuConfiguraci_n;
    QMenu *menuElegir_Puerto;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(530, 530);
        MainWindow->setMinimumSize(QSize(530, 530));
        MainWindow->setMaximumSize(QSize(530, 530));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        actionCOM1 = new QAction(MainWindow);
        actionCOM1->setObjectName(QStringLiteral("actionCOM1"));
        actionCOM2 = new QAction(MainWindow);
        actionCOM2->setObjectName(QStringLiteral("actionCOM2"));
        actionCOM5 = new QAction(MainWindow);
        actionCOM5->setObjectName(QStringLiteral("actionCOM5"));
        actionControles = new QAction(MainWindow);
        actionControles->setObjectName(QStringLiteral("actionControles"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 0, 431, 431));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/pong.jpg")));
        label->setScaledContents(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 430, 241, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_iniciar = new QPushButton(layoutWidget);
        btn_iniciar->setObjectName(QStringLiteral("btn_iniciar"));

        horizontalLayout->addWidget(btn_iniciar);

        btn_salir = new QPushButton(layoutWidget);
        btn_salir->setObjectName(QStringLiteral("btn_salir"));

        horizontalLayout->addWidget(btn_salir);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 530, 21));
        menuConfiguraci_n = new QMenu(menuBar);
        menuConfiguraci_n->setObjectName(QStringLiteral("menuConfiguraci_n"));
        menuElegir_Puerto = new QMenu(menuConfiguraci_n);
        menuElegir_Puerto->setObjectName(QStringLiteral("menuElegir_Puerto"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuConfiguraci_n->menuAction());
        menuConfiguraci_n->addAction(menuElegir_Puerto->menuAction());
        menuConfiguraci_n->addAction(actionControles);
        menuElegir_Puerto->addAction(actionCOM1);
        menuElegir_Puerto->addAction(actionCOM2);
        menuElegir_Puerto->addAction(actionCOM5);

        retranslateUi(MainWindow);
        QObject::connect(btn_salir, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PONG", 0));
        actionCOM1->setText(QApplication::translate("MainWindow", "COM1", 0));
        actionCOM2->setText(QApplication::translate("MainWindow", "COM2", 0));
        actionCOM5->setText(QApplication::translate("MainWindow", "COM5", 0));
        actionControles->setText(QApplication::translate("MainWindow", "Controles", 0));
        label->setText(QString());
        btn_iniciar->setText(QApplication::translate("MainWindow", "Iniciar", 0));
        btn_salir->setText(QApplication::translate("MainWindow", "Salir", 0));
        menuConfiguraci_n->setTitle(QApplication::translate("MainWindow", "Configuraci\303\263n", 0));
        menuElegir_Puerto->setTitle(QApplication::translate("MainWindow", "Elegir Puerto", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
