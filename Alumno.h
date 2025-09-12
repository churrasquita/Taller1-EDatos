#pragma once
#include <string>

class Alumno{
    private:
        int id; // identificador único del alumno
        std::string nombre;
        std::string apellido;
        std::string carrera;
        std::string ingreso;
        static int contador;
    public:
        Alumno(std::string nombre, std:: string apellido, std:: string carrera, std:: string ingreso);
        int getId();
        std::string getNombre();
        std::string getApellido();
        std::string getCarrera();
        std::string getIngreso();
        void toString();
        ~Alumno(); //destructor
};