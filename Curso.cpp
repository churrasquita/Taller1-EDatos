#include "Curso.h"
#include <string>
#include <iostream>
Curso::Curso(int id, int maxEstudiantes, std::string nombre, std::string carrera, std::string profesor){
    this->id = id;
    this->maxEstudiantes = maxEstudiantes;
    this->nombre = nombre;
    this->carrera = carrera;
    this->profesor= profesor;
}
int Curso::getId(){return id;}
int Curso::getMaxEst(){return maxEstudiantes;}
std::string Curso::getNombre(){return nombre;}
std::string Curso::getCarrera(){return carrera;}
std::string Curso::getProfesor(){ return profesor;}
void Curso::toString(){
    std::cout<<"id: "<<id<<" /Curso: "<<nombre<<" /Máx estudiantes: "<<maxEstudiantes<<" /Carrera:"<< carrera<<"/Profesor: "<<profesor<<std::endl;
}
Curso::~Curso(){
    std::cout<<"Curso eliminado"<<std::endl;
 //por completar
}