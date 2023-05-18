/********************************************************************************
** Form generated from reading UI file 'play.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_H
#define UI_PLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PLAY
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *GRILLA;
    QLCDNumber *LCDPLAYER2;
    QLCDNumber *LCDPLAYER1;
    QLabel *label_p1;
    QLabel *label_p2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_INIC;
    QPushButton *PAUSA;

    void setupUi(QWidget *PLAY)
    {
        if (PLAY->objectName().isEmpty())
            PLAY->setObjectName(QStringLiteral("PLAY"));
        PLAY->setWindowModality(Qt::NonModal);
        PLAY->resize(480, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PLAY->sizePolicy().hasHeightForWidth());
        PLAY->setSizePolicy(sizePolicy);
        PLAY->setMinimumSize(QSize(480, 480));
        PLAY->setMaximumSize(QSize(480, 480));
        verticalLayoutWidget = new QWidget(PLAY);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 80, 331, 321));
        GRILLA = new QVBoxLayout(verticalLayoutWidget);
        GRILLA->setSpacing(0);
        GRILLA->setObjectName(QStringLiteral("GRILLA"));
        GRILLA->setSizeConstraint(QLayout::SetDefaultConstraint);
        GRILLA->setContentsMargins(0, 0, 0, 0);
        LCDPLAYER2 = new QLCDNumber(PLAY);
        LCDPLAYER2->setObjectName(QStringLiteral("LCDPLAYER2"));
        LCDPLAYER2->setGeometry(QRect(260, 30, 140, 40));
        sizePolicy.setHeightForWidth(LCDPLAYER2->sizePolicy().hasHeightForWidth());
        LCDPLAYER2->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        LCDPLAYER2->setPalette(palette);
        LCDPLAYER2->setDigitCount(7);
        LCDPLAYER2->setSegmentStyle(QLCDNumber::Flat);
        LCDPLAYER1 = new QLCDNumber(PLAY);
        LCDPLAYER1->setObjectName(QStringLiteral("LCDPLAYER1"));
        LCDPLAYER1->setGeometry(QRect(70, 30, 140, 40));
        sizePolicy.setHeightForWidth(LCDPLAYER1->sizePolicy().hasHeightForWidth());
        LCDPLAYER1->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        LCDPLAYER1->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        LCDPLAYER1->setFont(font);
        LCDPLAYER1->setAutoFillBackground(false);
        LCDPLAYER1->setStyleSheet(QStringLiteral("font: 8pt \"MS Shell Dlg 2\";"));
        LCDPLAYER1->setSmallDecimalPoint(false);
        LCDPLAYER1->setDigitCount(7);
        LCDPLAYER1->setMode(QLCDNumber::Dec);
        LCDPLAYER1->setSegmentStyle(QLCDNumber::Flat);
        LCDPLAYER1->setProperty("intValue", QVariant(0));
        label_p1 = new QLabel(PLAY);
        label_p1->setObjectName(QStringLiteral("label_p1"));
        label_p1->setGeometry(QRect(110, 0, 71, 31));
        sizePolicy.setHeightForWidth(label_p1->sizePolicy().hasHeightForWidth());
        label_p1->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_p1->setPalette(palette2);
        label_p2 = new QLabel(PLAY);
        label_p2->setObjectName(QStringLiteral("label_p2"));
        label_p2->setGeometry(QRect(310, 0, 61, 31));
        sizePolicy.setHeightForWidth(label_p2->sizePolicy().hasHeightForWidth());
        label_p2->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_p2->setPalette(palette3);
        verticalLayoutWidget_2 = new QWidget(PLAY);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(70, 410, 331, 54));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_INIC = new QPushButton(verticalLayoutWidget_2);
        btn_INIC->setObjectName(QStringLiteral("btn_INIC"));
        btn_INIC->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_INIC->sizePolicy().hasHeightForWidth());
        btn_INIC->setSizePolicy(sizePolicy1);
        btn_INIC->setFlat(false);

        verticalLayout_2->addWidget(btn_INIC);

        PAUSA = new QPushButton(verticalLayoutWidget_2);
        PAUSA->setObjectName(QStringLiteral("PAUSA"));

        verticalLayout_2->addWidget(PAUSA);

        label_p1->raise();
        verticalLayoutWidget->raise();
        LCDPLAYER2->raise();
        LCDPLAYER1->raise();
        label_p2->raise();
        verticalLayoutWidget_2->raise();

        retranslateUi(PLAY);

        btn_INIC->setDefault(false);


        QMetaObject::connectSlotsByName(PLAY);
    } // setupUi

    void retranslateUi(QWidget *PLAY)
    {
        PLAY->setWindowTitle(QApplication::translate("PLAY", "PONG", 0));
        label_p1->setText(QApplication::translate("PLAY", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">PLAYER1</span></p></body></html>", 0));
        label_p2->setText(QApplication::translate("PLAY", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">PLAYER2</span></p></body></html>", 0));
        btn_INIC->setText(QApplication::translate("PLAY", "GO", 0));
        PAUSA->setText(QApplication::translate("PLAY", "STOP", 0));
    } // retranslateUi

};

namespace Ui {
    class PLAY: public Ui_PLAY {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_H
