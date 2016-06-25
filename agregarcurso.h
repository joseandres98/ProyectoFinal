#ifndef AGREGARCURSO_H
#define AGREGARCURSO_H

#include <QDialog>

namespace Ui {
class AgregarCurso;
}

class AgregarCurso : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarCurso(QWidget *parent = 0);
    ~AgregarCurso();
    void CursoWindows();
    void ClaseWindows();
    void LabWindows();

private slots:
    void on_btnGuardar_clicked();

    void on_cmbTipo_currentIndexChanged(const QString &arg1);

private:
    Ui::AgregarCurso *ui;
};

#endif // AGREGARCURSO_H
