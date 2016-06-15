#include "curso.h"
#include <iomanip>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;


Curso::Curso()
{
    this->codigo = 0;
    strcpy(this->nombre,"");
    this->matriculados = 0;
    strcpy(this->fecha,"01/01/1999");

}

Curso::Curso(int codigo,char * nombre,int matriculados ,char * fecha){
    this->codigo = codigo;
    strcpy(this->nombre,nombre);
    this->matriculados = matriculados;
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

void Curso::setMatriculados(int matriculados){
    if(isdigit(matriculados))
        this->matriculados = matriculados;
    else
    {
        cout<<"Ingrese un valor correcto para matriculados: ";
        cin>>matriculados;
        setMatriculados(matriculados);
    }

}

void Curso::setFecha(char*fecha){
    strcpy(this->fecha,fecha);
}

int Curso::getCodigo() const{
    return this->codigo;
}
const char * Curso::getNombre() const{
    return this->nombre;
}
const char * Curso::getFecha() const{
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

int Curso::getCupo(){
    
}



void Curso::Leer(){
    ifstream entrada;
        Curso curso;
        entrada.open("Datos.dat", ios::binary|ios::app);
        entrada.seekg(0,ios::end);
        long longitudFichero=entrada.tellg();
        entrada.seekg(0, ios::beg);

        if(!entrada.good()) return;

        for (int i = 0; i < (longitudFichero/sizeof(Curso)); i++)
        {
            entrada.read((char*)(&curso),sizeof(Curso));
//            cout<<entrada.tellg();
  //          cout<<curso<<endl;
        }
}

void Curso::Escribir(){
    ofstream salida;

        string codigo,nombre,matriculados,fecha;
        long id;

        list <Curso*> lista;


        salida.open("Datos.dat", ios::binary|ios::app);
        for (int i = 0; i < 2; i++) {
        cout<<"Introduzca nombre"<<endl;
           cin>> nombre;
           cout<<"Introduzca Codigo"<<endl;
            cin>> codigo;
            cout<<"Introduzca Fecha"<<endl;
            cin>> fecha;
            cout<<"Matriculados"<<endl;
            cin>> matriculados;
            lista.push_back(new Curso(codigo,nombre,matriculados,fecha));

            salida.write((char*)(lista.back()),sizeof(Curso));
}
}
