#ifndef CURSO_H
#define CURSO_H


class Curso
{
public:
    Curso();
    Curso(int,char*,char*);
    virtual ~Curso();
    void setCodigo(int);
    void setNombre(char*);
    void setFecha(char*);
    int getCodigo() const;
    char * getNombre() const;
    char * getFecha() const;
    virtual void toPrint() const;

private:
    int codigo;
    char * nombre;
    char * fecha;
};

#endif // CURSO_H

