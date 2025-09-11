#include "Alumno.h"
#include <iostream>

using namespace std;

Alumno::Alumno(int id, string nombre, string apellido, string carrera, string ingreso){
    this->id=id;
    this->nombre=nombre;
    this->apellido=apellido;
    this->carrera=carrera;
    this->ingreso=ingreso;
}

void Alumno::toString(){
    std::cout<<"id: "<<id<<" /Nombre: "<<nombre<<" /Apellido: "<<apellido<<" /Carrera:"<< carrera<<"/Ano ingreso: "<<ingreso<<std::endl;
}
Alumno:: ~Alumno(){
   //Por incorporar 
}
