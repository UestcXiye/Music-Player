#-------------------------------------------------
#
# Project created by QtCreator 2023-11-07T18:08:49
#
#-------------------------------------------------

QT       += core gui
QT += phonon

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myPlayer
TEMPLATE = app


SOURCES += main.cpp\
        mywidget.cpp \
    myplaylist.cpp \
    mylrc.cpp

HEADERS  += mywidget.h \
    myplaylist.h \
    mylrc.h

FORMS    += mywidget.ui

RESOURCES += \
    myimages.qrc
