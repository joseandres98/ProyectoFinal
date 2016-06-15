#ifndef CURSO_H
#define CURSO_H


class Curso
{
public:
    Curso();
    Curso(int,char*,int,char*);
    virtual ~Curso();
    void setCodigo(int);
    void setNombre(char*);
    void setMatriculados(int);
    void setFecha(char*);
    int getCodigo() const;
    const char * getNombre() const;
    int getMatriculados() const;
    const char * getFecha() const;
    virtual void toPrint() const;
    virtual int getCupo();
    void Leer();
    void Escribir();


private:
    int codigo;
    char nombre [50];
    int matriculados;
    char fecha [11];
};

#endif // CURSO_H
