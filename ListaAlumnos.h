#pragma once
#include "NodoAlumno.h"
#include <string>
#include <iostream>

class ListaAlumnos{
    private:
        NodoAlumno* head;
    public:
        ListaAlumnos();
        void insertarAlumno(Alumno* alumno);
        void eliminarAlumno(int id);
        Alumno* buscarAlumnoId(int id);
        Alumno* buscarAlumnoNombre(string nombre);
        ~ListaAlumnos();
}