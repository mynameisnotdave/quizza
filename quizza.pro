#-------------------------------------------------
#
# Project created by QtCreator 2016-10-02T15:58:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = quizza
TEMPLATE = app


SOURCES += main.cpp\
        quizzawindow.cpp \
    quizfileparser.cpp

HEADERS  += quizzawindow.h \
    quizfileparser.h

FORMS    += quizzawindow.ui
