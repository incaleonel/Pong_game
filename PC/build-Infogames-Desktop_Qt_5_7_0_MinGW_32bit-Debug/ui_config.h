/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QPushButton *btn_aplicar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_p2;
    QLabel *label_4;
    QLineEdit *LE_izq;
    QLineEdit *LE_der;
    QLineEdit *LE_nombre2;
    QLineEdit *LE_nombre1;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_5;

    void setupUi(QWidget *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(400, 230);
        btn_aplicar = new QPushButton(config);
        btn_aplicar->setObjectName(QStringLiteral("btn_aplicar"));
        btn_aplicar->setGeometry(QRect(290, 190, 75, 23));
        label = new QLabel(config);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 120, 47, 13));
        label_2 = new QLabel(config);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 120, 47, 13));
        label_p2 = new QLabel(config);
        label_p2->setObjectName(QStringLiteral("label_p2"));
        label_p2->setGeometry(QRect(230, 60, 41, 20));
        label_4 = new QLabel(config);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 51, 20));
        LE_izq = new QLineEdit(config);
        LE_izq->setObjectName(QStringLiteral("LE_izq"));
        LE_izq->setGeometry(QRect(70, 120, 101, 20));
        LE_der = new QLineEdit(config);
        LE_der->setObjectName(QStringLiteral("LE_der"));
        LE_der->setGeometry(QRect(280, 120, 101, 20));
        LE_nombre2 = new QLineEdit(config);
        LE_nombre2->setObjectName(QStringLiteral("LE_nombre2"));
        LE_nombre2->setGeometry(QRect(280, 60, 101, 20));
        LE_nombre1 = new QLineEdit(config);
        LE_nombre1->setObjectName(QStringLiteral("LE_nombre1"));
        LE_nombre1->setGeometry(QRect(70, 60, 101, 20));
        pushButton = new QPushButton(config);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 190, 75, 23));
        comboBox = new QComboBox(config);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(100, 10, 151, 22));
        label_5 = new QLabel(config);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 10, 61, 21));
        QWidget::setTabOrder(LE_nombre1, LE_izq);
        QWidget::setTabOrder(LE_izq, LE_der);
        QWidget::setTabOrder(LE_der, LE_nombre2);
        QWidget::setTabOrder(LE_nombre2, comboBox);
        QWidget::setTabOrder(comboBox, btn_aplicar);
        QWidget::setTabOrder(btn_aplicar, pushButton);

        retranslateUi(config);
        QObject::connect(pushButton, SIGNAL(clicked()), config, SLOT(close()));
        QObject::connect(comboBox, SIGNAL(editTextChanged(QString)), btn_aplicar, SLOT(click()));

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QWidget *config)
    {
        config->setWindowTitle(QApplication::translate("config", "Control", 0));
        btn_aplicar->setText(QApplication::translate("config", "Aplicar", 0));
        label->setText(QApplication::translate("config", "Izquierda", 0));
        label_2->setText(QApplication::translate("config", "Derecha", 0));
        label_p2->setText(QApplication::translate("config", "Player2", 0));
        label_4->setText(QApplication::translate("config", "Player1", 0));
        pushButton->setText(QApplication::translate("config", "Cerrar", 0));
        label_5->setText(QApplication::translate("config", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Puerto</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
