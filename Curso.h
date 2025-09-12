#pragma once
#include <string>

class Curso{
    private:
        int id;
        int maxEstudiantes;
        std::string nombre;
        std::string carrera;
        std::string profesor;
        static int contador;
       
    public:
        Curso(int maxEstudiantes, std::string nombre, std::string carrera, std::string profesor);
        int getId();
        int getMaxEst();
        std::string getNombre();
        std::string getCarrera();
        std::string getProfesor();
        void toString();
        ~Curso(); //destructor
};