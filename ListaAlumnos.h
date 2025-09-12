#pragma once
#include "NodoAlumno.h"
#include "Alumno.h"
#include <string>
#include <iostream>

class ListaAlumnos{
    private:
        NodoAlumno* head;
    public:
        ListaAlumnos();
        void insertarAlumno(Alumno* alumno);
        bool eliminarAlumno(int id);
        Alumno* buscarAlumnoId(int id);
        void buscarAlumnoNombre(std::string nombre);
        ~ListaAlumnos();
};