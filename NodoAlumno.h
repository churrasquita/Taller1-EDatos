#pragma once
#include "Alumno.h"
class NodoAlumno{
    private:
        Alumno* alumno;
        NodoAlumno* siguiente;
    public:
        NodoAlumno(Alumno& alumno);
        NodoAlumno* getSiguiente();
        Alumno* getAlumno();
        void setSiguiente(Alumno& alumno);
        ~NodoAlumno();
}