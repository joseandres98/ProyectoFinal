#include "archivo.h"
#include "curso.h"
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <fstream>
using namespace std;

Archivo::Archivo(int aux)
{
   this->matriculados = aux;
}


void Archivo::agregarCurso(Curso curso){

        lista[this->matriculados] = new Curso(curso);
        this->matriculados++;
}


void Archivo::Escribir(){

    ofstream archivoSalida ("Cursos.txt", ios::out | ios::binary);

    for (int i=0; i<this->matriculados; i++)
        archivoSalida.write(reinterpret_cast<const char *> (lista[i]),sizeof(Curso));
}


void Archivo::Leer(){
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
        this->agregarCurso(curso);
        archivoEntrada.read(reinterpret_cast<char *>(&curso), sizeof(Curso));
    }
}
