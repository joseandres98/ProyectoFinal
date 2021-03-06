#include "laboratorio.h"
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;


Laboratorio::Laboratorio()
{
    Curso();
    this->numLaboratorio = 0;
    strcpy(this->instructor,"");
}

Laboratorio:: Laboratorio(int codigo,char* nombre,char* fecha,int numLaboratorio,char* instructor)
    : Curso(codigo,nombre,fecha){
    this->numLaboratorio = numLaboratorio;
    this->instructor = instructor;
}

Laboratorio::~Laboratorio(){
    delete []instructor;
}

void Laboratorio::setNumLaboratorio(int nLab){
    if(isdigit(nLab))
        this->numLaboratorio = nLab;
    else{
        cout<<"Ingrese un numero de laboratorio correcto: ";
        cin>>nLab;
        setNumLaboratorio(nLab);
    }
}

void Laboratorio::setInstructor(char * instructor){
    strcpy(this->instructor,instructor);
}

int Laboratorio::getNumLaboratorio() const{
    return this->numLaboratorio;
}
const char* Laboratorio::getInstructor() const{
    return this->instructor;
}

int Laboratorio::getDias()const{
    return this->dias;
}

void Laboratorio::toPrint() const{
    Curso::toPrint();
    cout<< "Numero de Laboratorio: "<< this->numLaboratorio;
    cout<< " Nombre Instructor: ";
    cout<< this->instructor;
    cout<< " Dias: "<<this->dias;
    cout<< endl<<endl;
}
