#include "agregarcurso.h"
#include "ui_agregarcurso.h"

AgregarCurso::AgregarCurso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarCurso)
{
    ui->setupUi(this);
}

AgregarCurso::~AgregarCurso()
{
    delete ui;
}

void AgregarCurso::on_btnGuardar_clicked()
{

}

void AgregarCurso::on_cmbTipo_currentIndexChanged(const QString &arg1)
{
    ui->btnGuardar->setEnabled(true);
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
            LabWindows();}
}

void AgregarCurso::CursoWindows()
{
    ui->lblNumClase->setVisible(false);
    ui->txtNumClase->setVisible(false);
    ui->lblInstructor->setVisible(false);
    ui->txtInstructor->setVisible(false);
    ui->lblDias->setVisible(false);
    ui->txtDias->setVisible(false);
}



void AgregarCurso::ClaseWindows()
{
    ui->lblNumClase->setVisible(true);
    ui->txtNumClase->setVisible(true);
    ui->lblInstructor->setVisible(true);
    ui->txtInstructor->setVisible(true);
    ui->lblDias->setVisible(true);
    ui->txtDias->setVisible(true);
    ui->lblNumClase->setText("Num. Clase:");
}

void AgregarCurso::LabWindows()
{
    ui->lblNumClase->setVisible(true);
    ui->txtNumClase->setVisible(true);
    ui->lblInstructor->setVisible(true);
    ui->txtInstructor->setVisible(true);
    ui->lblDias->setVisible(true);
    ui->txtDias->setVisible(true);
    ui->lblNumClase->setText("Num. Lab:");
}
