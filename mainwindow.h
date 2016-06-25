#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void getData();

private slots:
    void on_btnCerrar_clicked();

    void on_pushButton_6_clicked();

    void on_btnArchivo_clicked();

    void on_btnBuscar_clicked();

    void on_btnCursos_clicked();

    void on_btnMatricular_clicked();

private:
    Ui::MainWindow *ui;
    void UPmantWindow();
};

#endif // MAINWINDOW_H
