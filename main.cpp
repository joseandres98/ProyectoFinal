#include "mainwindow.h"
#include "mantcurso.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



        //int nMatriculados=0;
    MainWindow w;
    w.show();



    return a.exec();
}
