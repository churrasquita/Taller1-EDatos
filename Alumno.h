#pragma once
#include <string>
#include "ListaCursos.h"

class Alumno{
    private:
        int id; 
        std::string nombre;
        std::string apellido;
        std::string carrera;
        std::string ingreso;
        static int contador;
        ListaCursos cursosInscritos;

    public:
        Alumno(std::string nombre, std:: string apellido, std:: string carrera, std:: string ingreso);
        int getId();
        std::string getNombre();
        std::string getApellido();
        std::string getCarrera();
        std::string getIngreso();
        void inscribirC(Curso* curso);
        void eliminarC(int idCurso);
        void toString();
        ~Alumno(); 
};