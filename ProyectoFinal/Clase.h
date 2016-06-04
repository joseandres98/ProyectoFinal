//CLASE

#ifndef CLASE_H
#define CLASE_H
#include "curso.h"


class clase :/*<LLAMA A LA CLASE BASE>*/ public curso
{
public:
    //CONSTRUCTORES Y DESTRUCTORES
    Clase();
    Clase(int,char,int);
    virtual ~clase();

    //FUNCIONES Y METODOS DE ENCAPSULAMIENTO(GETTER Y SETTER)
    void setAula(int);
    void setCatedratico(char);
    void setDias(int);
    int getAula() const;
    const char getCatedratico() const;
    int getDias() const;

    //FUNCIONES Y METODOS ESPECIALES
    virtual void toPrint();  //FUNCION QUE IMPRIME EN LA PANTALLA LA INFORMACION DE LA CLASE

private:
    //DECLARACION DE ATRIBUTOS DE LA CLASE DERIVADA
    int aula;
    char catedratico [100];
    int dias;
};

#endif // CLASE_H
