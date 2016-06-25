#include "mainwindow.h"
#include "listaClase.h"
#include "listalaboratorio.h"
#include "ui_mainwindow.h"
#include "agregarcurso.h"
#include "mantcurso.h"
#include "buscar.h"
#include <qfiledialog.h>
#include <iostream>
#include <cstring>
#include <QMessageBox>

using namespace std;

string file;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCerrar_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_6_clicked()
{
    UPmantWindow();
}

void MainWindow::UPmantWindow(){
    MantCurso *frm = new MantCurso;
    frm->show();
    frm->setVisible(true);
}

void MainWindow::on_btnArchivo_clicked()
{
    QStringList filters;
    filters << "Text Files (*.txt)";

    QFileDialog dial(this);
    dial.setNameFilters(filters);
    dial.exec();
    dial.show();

    file = dial.getOpenFileName().toStdString();

    if(file == "Clase.txt")
    {
     listaClase * lista = new listaClase;
     lista->leerArchivoAleatorio(file);
    }
    else{ if(file == "Laboratorio.txt"){
        ListaLaboratorio * lista = new ListaLaboratorio;
        lista->leerArchivoAleatorio(file);
    }else
        {QMessageBox msg;
        msg.setText("Archivo de Texto no valido! Ejem.(Clase.txt)(Laboratorio.txt)");
        msg.exec();
        on_btnArchivo_clicked();
        }
    }

}

void MainWindow::on_btnBuscar_clicked()
{
    Buscar *frm = new Buscar;
    frm->show();
    frm->setVisible(true);
}

void MainWindow::on_btnCursos_clicked()
{
    AgregarCurso *frm = new AgregarCurso;
    frm->show();
    frm->setVisible(true);
}

void MainWindow::on_btnMatricular_clicked()
{
    QMessageBox msg;
    msg.setText("Matriculados Exitosamente!");
    msg.exec();
}
