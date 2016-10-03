#-------------------------------------------------
#
# Project created by QtCreator 2016-09-23T21:43:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bulk_Club
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    display.cpp

HEADERS  += login.h \
    display.h

FORMS    += login.ui \
    display.ui

DISTFILES += \
    accounts.txt
