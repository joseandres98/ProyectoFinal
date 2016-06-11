#include "clase.h"
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;

Clase :: Clase()
{
    Curso();
    this->aula = 0;
    strcpy(this->catedratico,"");
    this->dias = 0;
}

Clase :: Clase(int codigo,char* nombre,char* fecha,int aula,char* catedratico,int dias)
    : Curso(codigo,nombre,fecha)
{
    this->aula = aula;
    strcpy(this->catedratico,catedratico);
    this->dias = dias;
}

Clase :: ~Clase()
{
    delete []catedratico;
}

void Clase:: setAula(int aula)
{
    if(isdigit(aula))
        this->aula = aula;
    else
    {
        cout<<"Ingrese un numero de aula correcto: ";
        cin>>aula;
        this->setAula(aula);
    }

}


void Clase:: setCatedratico(char * catedratico)
{
    strcpy(this->catedratico,catedratico);
}

void Clase:: setDias(int dias)
{
    if(isdigit(dias) && dias>0 && dias<=7)
        this->dias = dias;
    else
    {
        cout<<"Ingrese numero de dias correcto: ";
        cin>>dias;
        this->setDias(dias);
    }
}

int Clase::getAula() const
{
    return this->aula;
}

const char * Clase::getCatedratico() const
{
    return this->catedratico;
}

int Clase::getDias() const
{
    return this->dias;
}

void Clase::toPrint() const
{
    Curso::toPrint();
    cout<< "Aula: "<<this->aula;
    cout<< " Catedratico: ";
    cout<< this->catedratico;
    cout<< " Dias: "<< this->dias;
    cout<< endl<<endl;
}
