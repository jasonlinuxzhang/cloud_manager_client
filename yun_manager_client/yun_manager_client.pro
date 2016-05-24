#-------------------------------------------------
#
# Project created by QtCreator 2016-05-14T22:07:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = yun_manager_client
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    detail.cpp \
    definedetail.cpp \
    myinterface.cpp \
    mythread.cpp

HEADERS  += widget.h \
    detail.h \
    definedetail.h \
    myinterface.h \
    common.h \
    mythread.h

FORMS    += widget.ui \
    detail.ui \
    definedetail.ui

RESOURCES += \
    image.qrc
QT += network
