#pragma once
#include "NodoCurso.h"
#include <string>
#include <iostream>

class ListaCursos{
    private:
        NodoCurso* head;
    public:
        ListaCursos();
        void insertarCurso(Curso* curso);
        bool eliminarCurso(int id);
        Curso* buscarCursoId(int id);
        void buscarCursoNombre(std::string nombre);
        ~ListaCursos();
};