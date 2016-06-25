#ifndef ListaLaboratorio_H
#define ListaLaboratorio_H
#include "Curso.h"
#include <ostream>
#include <cstring>
using namespace std;

class ListaLaboratorio
{
    public:
        ListaLaboratorio();
        virtual ~ListaLaboratorio();
        void insertarAlInicio(Curso *);
        void insertar(int, const char *, int, const char*, int, const char *);
        void insertarAlFinal(Curso *);
        void mostrarLista();
        Curso * buscarCurso(int);
        void guardarArchivoAleatorio(string);
        void leerArchivoAleatorio(string);
        void agregar(Curso *);

    protected:

    private:
        Curso * inicio;
        Curso * fin;
        char nombreArchivo[30];
};

#endif // ListaLaboratorio_H
