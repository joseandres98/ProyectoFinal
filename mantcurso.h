#ifndef MANTCURSO_H
#define MANTCURSO_H

#include <mainwindow.h>
#include <QDialog>

namespace Ui {
class MantCurso;
}

class MantCurso : public QDialog
{
    Q_OBJECT

public:
    explicit MantCurso(QWidget *parent = 0);
    ~MantCurso();

private slots:
    void on_btnSalir_clicked();

    void on_cmbTipo_currentIndexChanged(const QString &arg1);

private:
    Ui::MantCurso *ui;
    void CursoWindows();
    void ClaseWindows();
    void LabWindows();
};

#endif // MANTCURSO_H
