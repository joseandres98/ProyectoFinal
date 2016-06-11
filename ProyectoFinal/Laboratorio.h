#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "curso.h"

class Laboratorio : public Curso
{
public:
    Laboratorio();
    Laboratorio(int,char*,char*,int,char*);
    virtual ~Laboratorio();
    void setNumLaboratorio(int);
    void setInstructor(char *);
    int getNumLaboratorio() const;
    const char* getInstructor() const;
    int getDias() const;
    virtual void toPrint() const;
private:
    int numLaboratorio;
    char * instructor;
    static const int dias = 6;
};

#endif // LABORATORIO_H

