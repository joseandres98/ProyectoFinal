#-------------------------------------------------
#
# Project created by QtCreator 2016-06-11T16:42:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoProgra
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clase.cpp \
    curso.cpp \
    laboratorio.cpp \
    archivo.cpp \
    mantcurso.cpp \
    buscar.cpp \
    agregarcurso.cpp \
    listaClase.cpp \
    listalaboratorio.cpp

HEADERS  += mainwindow.h \
    clase.h \
    curso.h \
    laboratorio.h \
    mantcurso.h \
    buscar.h \
    agregarcurso.h \
    listaClase.h \
    listalaboratorio.h

FORMS    += mainwindow.ui \
    mantcurso.ui \
    buscar.ui \
    agregarcurso.ui
