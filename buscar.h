#ifndef BUSCAR_H
#define BUSCAR_H

#include <QDialog>

namespace Ui {
class Buscar;
}

class Buscar : public QDialog
{
    Q_OBJECT

public:
    explicit Buscar(QWidget *parent = 0);
    ~Buscar();

private:
    Ui::Buscar *ui;
};

#endif // BUSCAR_H
