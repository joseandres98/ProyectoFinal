#include "curso.h"
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;


Curso::Curso()
{
    this->codigo = 0;
    strcpy(this->nombre,"");
    strcpy(this->fecha,"01/01/1999");

}

Curso::Curso(int codigo,char * nombre ,char * fecha){
    this->codigo = codigo;
    strcpy(this->nombre,nombre);
    strcpy(this->fecha,fecha);
}

Curso::~Curso(){
    delete []nombre;
    delete []fecha;
}

void Curso::setCodigo(int codigo){
    if(isdigit(codigo))
        this->codigo = codigo;
    else
    {
        cout<<"Ingrese un valor  correcto para codigo: ";
        cin>>codigo;
        setCodigo(codigo);
    }
}

void Curso::setNombre(char* nombre){
        strcpy(this->nombre,nombre);
}

void Curso::setFecha(char*fecha){
    strcpy(this->fecha,fecha);
}

int Curso::getCodigo() const{
    return this->codigo;
}
char * Curso::getNombre() const{
    return this->nombre;
}
char * Curso::getFecha() const{
    return this->fecha;
}

void Curso::toPrint() const
{
   cout<< "Codigo: " + this->getCodigo();
   cout<< " Nombre: ";
   cout<< this->nombre;
   cout<< " Fecha: ";
   cout<< this->fecha;
   cout<< endl<<endl;
}

