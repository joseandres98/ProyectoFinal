#ifndef ARCHIVO_H
#define ARCHIVO_H
#include "curso.h"


class Archivo : public Curso
{
public:
    Archivo(int);
    void agregarCurso(Curso);
    virtual void Escribir();
    virtual void Leer();

private:
        Curso * lista[1000];
        int matriculados;
};

#endif // ARCHIVO_H
