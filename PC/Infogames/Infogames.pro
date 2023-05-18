#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T10:09:39
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Infogames
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    play.cpp \
    player.cpp \
    config.cpp

HEADERS  += mainwindow.h \
    play.h \
    player.h \
    config.h

FORMS    += mainwindow.ui \
    play.ui \
    config.ui

RESOURCES += \
    imagenes.qrc \
    sound.qrc
include(C:\Users\Juani\Desktop\Infogames\qextserialport-1.2rc\src\qextserialport.pri)
