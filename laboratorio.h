#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "curso.h"

class Laboratorio : public Curso
{
public:
    Laboratorio();
    Laboratorio(int,const char*,int,const char*,int,const char*);
    virtual ~Laboratorio();
    void setNumLaboratorio(int);
    void setInstructor(char *);
    int getNumLaboratorio() const;
    const char* getInstructor() const;
    int getDias() const;
    virtual void toPrint() const;
    virtual int getCupo();
private:
    int numLaboratorio;
    char instructor [50];
    static const int dias = 6;
};

#endif // LABORATORIO_H
