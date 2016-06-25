#include "curso.h"
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <fstream>
using namespace std;


Curso::Curso()
{
    this->codigo = 0;
    strcpy(this->nombre,"");
    strcpy(this->fecha,"01/01/1999");

}

Curso::Curso(int codigo,char * nombre,int matriculados,char * fecha){
    this->codigo = codigo;
    strcpy(this->nombre,nombre);
    this->matriculados = matriculados;
    strcpy(this->fecha,fecha);
}

Curso::~Curso(){

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


const char * Curso::getNombre() const{
    return nombre;
}

const char * Curso::getFecha() const{
    return fecha;
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

int Curso::getMatriculados() const{
    return this->matriculados;
}

void Curso::setSiguiente(Curso * nuevo)
{
    delete siguiente;
    this->siguiente = nuevo;
}

Curso * Curso::getSiguiente()
{
    return siguiente;
}

void Curso::setAnterior(Curso * nuevo)
{
    this->anterior = nuevo;
}

Curso * Curso::getAnterior()
{
    return anterior;
}


int Curso::getCupo(){
    return 0;
}

void Curso::AgregarCurso(Curso curso)
{

        lista[this->matriculados] = new Curso(curso);
        this->matriculados++;
}


void Curso::Escribir()
{

    ofstream archivoSalida ("Cursos.txt", ios::out | ios::binary);

    for (int i=0; i<this->matriculados; i++)
        archivoSalida.write(reinterpret_cast<const char *> (lista[i]),sizeof(Curso));
}


void Curso::Leer()
{
    ifstream archivoEntrada ("Cursos.txt", ios::in | ios::binary);
    if (!archivoEntrada)
    {
        cout << "El archivo no existe." << endl;
        return;
    }

    Curso curso;

    archivoEntrada.read(reinterpret_cast<char *>(&curso), sizeof(Curso));
    while (archivoEntrada && !archivoEntrada.eof())
    {
        this->AgregarCurso(curso);
        archivoEntrada.read(reinterpret_cast<char *>(&curso), sizeof(Curso));
    }
}




