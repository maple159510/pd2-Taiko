#-------------------------------------------------
#
# Project created by QtCreator 2016-05-14T03:42:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MapleTaiko
TEMPLATE = app


SOURCES += main.cpp \
    monster.cpp \
    player.cpp \
    game.cpp \
    score.cpp \
    timer.cpp \
    mainwindow.cpp \
    punch.cpp

HEADERS  += \
    monster.h \
    player.h \
    game.h \
    score.h \
    timer.h \
    mainwindow.h \
    punch.h

FORMS    += \
    mainwindow.ui

RESOURCES += \
    pics.qrc
