#pragma once
#include "ListaNotas.h"

class Alumno;
class NodoAlumno{
    private:
        Alumno* alumno;
        NodoAlumno* siguiente;
        ListaNotas notas;

    public:
        NodoAlumno(Alumno* alumno);
        NodoAlumno* getSiguiente();
        Alumno* getAlumno();
        void setSiguiente(NodoAlumno* alumno);
        ListaNotas& getNotas();
        ~NodoAlumno();
};