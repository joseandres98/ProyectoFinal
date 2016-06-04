//LABORATORIO

#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "curso.h"


class laboratorio : curso
{
public:
    //CONSTRUCTORES Y DESTRUCTORES
    Laboratorio();
    Laboratorio(int,char);
    virtual ~laboratorio();

    //FUNCIONES Y METODOS DE ENCAPSULAMIENTO(GETTER Y SETTER)
    void setNumLaboratorio(int);
    void setInstructor(char);
    int getNumLaboratorio() const;
    const char getInstructor() const;
    int getDias() const;

    //FUNCIONES Y METODOS ESPECIALES
    virtual void toPrint();  //FUNCION QUE IMPRIME EN LA PANTALLA LA INFORMACION DE LA CLASE

private:
    //DECLARACION DE ATRIBUTOS DE LA CLASE DERIVADA
    int numLaboratorio;
    char instructor [100];
    static int dias;

};

#endif // LABORATORIO_H
