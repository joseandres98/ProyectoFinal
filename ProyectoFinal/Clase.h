#ifndef CLASE_H
#define CLASE_H
#include "curso.h"


class Clase : public Curso
{
public:
    Clase();
    Clase(int,char*,char*,int,char*,int);
    virtual ~Clase();
    void setAula(int);
    void setCatedratico(char *);
    void setDias(int);
    int getAula() const;
    const char * getCatedratico() const;
    int getDias() const;
    virtual void toPrint() const;

private:
    int aula;
    char * catedratico;
    int dias;
};

#endif // CLASE_H

