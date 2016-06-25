#ifndef CURSO_H
#define CURSO_H


class Curso
{
public:
    Curso();
    Curso(int,const char*,int,const char*);
    virtual ~Curso();
    void setCodigo(int);
    void setNombre(char*);
    void setFecha(char*);
    int getCodigo() const;
    const char * getNombre() const;
    const char * getFecha() const;
    int getMatriculados() const;
    virtual void toPrint() const;
    virtual int getCupo();
    void setSiguiente(Curso *);
    Curso * getSiguiente();
    void setAnterior(Curso *);
    Curso * getAnterior();

private:
    Curso * lista[1000];
    int codigo;
    char nombre [50];
    char fecha [11];
    int matriculados;
    Curso * siguiente;
    Curso * anterior;
};

#endif // CURSO_H
