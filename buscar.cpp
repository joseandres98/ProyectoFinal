#include "buscar.h"
#include "ui_buscar.h"

Buscar::Buscar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buscar)
{
    ui->setupUi(this);
}

Buscar::~Buscar()
{
    delete ui;
}
