#include "mantcurso.h"
#include "ui_mantcurso.h"

MantCurso::MantCurso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MantCurso)
{
    ui->setupUi(this);
}


MantCurso::~MantCurso()
{
    delete ui;
}

void MantCurso::on_btnSalir_clicked()
{
  this->close();
}

void MantCurso::on_cmbTipo_currentIndexChanged(const QString &arg1)
{   ui->btnGuardar->setEnabled(true);
    if(ui->cmbTipo->currentText()==""){
    ui->cmbTipo->removeItem(0);
    }
    if(ui->cmbTipo->currentText() == "Curso"){
        CursoWindows();
    }
    if(ui->cmbTipo->currentText() == "Clase"){
        ClaseWindows();
    }
    if(ui->cmbTipo->currentText() == "Laboratorio"){
        LabWindows();
    }
}


void MantCurso::CursoWindows(){
    ui->lblNumClase->setVisible(false);
    ui->txtNumClase->setVisible(false);
    ui->lblInstructor->setVisible(false);
    ui->txtInstructor->setVisible(false);
    ui->lblDias->setVisible(false);
    ui->txtDias->setVisible(false);
}



void MantCurso::ClaseWindows(){
    ui->lblNumClase->setVisible(true);
    ui->txtNumClase->setVisible(true);
    ui->lblInstructor->setVisible(true);
    ui->txtInstructor->setVisible(true);
    ui->lblDias->setVisible(true);
    ui->txtDias->setVisible(true);
    ui->lblNumClase->setText("Num. Clase:");
}

void MantCurso::LabWindows(){
    ui->lblNumClase->setVisible(true);
    ui->txtNumClase->setVisible(true);
    ui->lblInstructor->setVisible(true);
    ui->txtInstructor->setVisible(true);
    ui->lblDias->setVisible(true);
    ui->txtDias->setVisible(true);
    ui->lblNumClase->setText("Num. Lab:");
}
