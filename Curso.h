#pragma once
#include <string>
#include "ListaAlumnos.h"

class Curso{
    private:
        int id;
        int maxEstudiantes;
        std::string nombre;
        std::string carrera;
        std::string profesor;
        static int contador;
        int cantInscritos;
        ListaAlumnos alumnosCurso;
       
    public:
        Curso(int maxEstudiantes, std::string nombre, std::string carrera, std::string profesor);
        int getId();
        int getMaxEst();
        std::string getNombre();
        std::string getCarrera();
        std::string getProfesor();
        void toString();
        void inscribirAlumno(Alumno* alumno);
        bool eliminarAlumnoCurso(Alumno* alumno);
        bool registrarNota(int idAlumno, double nota);
        double promedioAlumno(int idAlumno);
        ~Curso(); 
};