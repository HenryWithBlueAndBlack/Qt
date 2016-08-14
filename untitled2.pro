#-------------------------------------------------
#
# Project created by QtCreator 2016-08-05T23:14:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled2
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    myqmenubutton.cpp \
    myaction.cpp \
    topButton.cpp

HEADERS  += widget.h \
    myqmenubutton.h \
    myaction.h

FORMS    += widget.ui

RESOURCES += \
    mainMenu.qrc
