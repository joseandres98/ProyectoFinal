//CURSO

#ifndef CURSO_H
#define CURSO_H

/* LIBRERIA PARA UTILIZAR VARIABLES FECHA --ESTA LIBRERIA LE PERMITE LLAMAR UNA SOLA VARIABLE QUE CONTENGA
 * LOS VALORES DE UNA FECHA COMO SER AÑO,MES,DIA O LA HORA CON SUS ATRIBUTOS */
#include <ctime>


//ESTRUCTURA PARA LA UTILIZACION DE LISTA DOBLEMENTE ENLAZADA
typedef struct nodo elemento;
struct nodo{
    int dato;
    nodo * siguiente;
    nodo * anterior;
};


//CLASE BASE ABSTRACTA
class curso
{
public:
    //CONSTRUCTORES Y DESTRUCTORES
    Curso();
    Curso(int,char*,time_t);
    virtual ~curso();

    //FUNCIONES Y METODOS DE ENCAPSULAMIENTO(GETTER Y SETTER)
    void setCodigo(int);
    void setNombre(char*);
    void setFecha(time_t);
    int getCodigo() const;
    const char * getNombre() const;
    const time_t getFecha() const;

    //FUNCIONES Y METODOS ESPECIALES
    const int getNumMatriculados() const;
    virtual void toPrint(); //FUNCION QUE IMPRIME EN LA PANTALLA LA INFORMACION DE LA CLASE
    virtual void getCupo();

private:
    //DECLARACION DE ATRIBUTOS DE LA CLASE BASE
    int codigo;
    char* nombre;
    time_t fecha;

    //DECLARACION PARA PODER UTILIZAR LA ESTRUCTURA DE NODOS EN LA CLASE
    friend struct nodo;
};




#endif // CURSO_H
