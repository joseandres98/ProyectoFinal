#ifndef listaClase_H
#define listaClase_H
#include "Curso.h"
#include <ostream>
#include <cstring>
using namespace std;

class listaClase
{
    public:
        listaClase();
        virtual ~listaClase();
        void insertarAlInicio(Curso *);
        void insertar(int, char * const, int, char* const , int, char * const, int);
        void insertarAlFinal(Curso *);
        void mostrarLista();
        bool buscarCurso(int);
        void guardarArchivoAleatorio(string);
        void leerArchivoAleatorio(string);
        void agregar(Curso *);

    protected:

    private:
        Curso * inicio;
        Curso * fin;
        char nombreArchivo[30];
};

#endif // listaClase_H
