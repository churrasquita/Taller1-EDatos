#include "Alumno.h"
#include <iostream>

int Alumno::contador=0;

Alumno::Alumno(std::string nombre, std::string apellido, std::string carrera, std::string ingreso){
    this->id= ++contador;
    this->nombre=nombre;
    this->apellido=apellido;
    this->carrera=carrera;
    this->ingreso=ingreso;
}

void Alumno::toString(){
    std::cout<<"id: "<<id<<" /Nombre: "<<nombre<<" /Apellido: "<<apellido<<" /Carrera: "<< carrera<<"/Fecha ingreso: "<<ingreso<<std::endl;
}
Alumno:: ~Alumno(){
   //Por incorporar 
}
std::string Alumno::getNombre(){return nombre;}
std::string Alumno::getApellido(){return apellido;} 
std::string Alumno::getCarrera(){return carrera;}
std::string Alumno::getIngreso(){return ingreso;}
int Alumno:: getId(){return id;}