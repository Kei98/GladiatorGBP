#-------------------------------------------------
#
# Project created by QtCreator 2019-05-09T14:22:28
#
#-------------------------------------------------

include(qge/qge.pri)

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GladiatorsGBP
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gladiator.cpp \
    gladiator2.cpp

HEADERS  += mainwindow.h \
    gladiator.h \
    gladiator2.h

FORMS    += mainwindow.ui \
    gladiator2.ui

RESOURCES += \
    images.qrc
