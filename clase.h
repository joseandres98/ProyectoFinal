#ifndef CLASE_H
#define CLASE_H
#include "curso.h"


class Clase : public Curso
{
public:
    Clase();
    Clase(int,const char*,int,const char*,int,const char*,int);
    virtual ~Clase();
    void setAula(int);
    void setCatedratico(char *);
    void setDias(int);
    int getAula() const;
    const char * getCatedratico() const;
    int getDias() const;
    virtual void toPrint() const;
    virtual int getCupo();

private:
    int aula;
    char catedratico [50];
    int dias;
};

#endif // CLASE_H
