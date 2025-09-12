#include "Alumno.h"
#include <iostream>
#include <string>
#include "Curso.h"

int Alumno::contador=0;

Alumno::Alumno(std::string nombre, std::string apellido, std::string carrera, std::string ingreso){
    this->id= ++contador;
    this->nombre=nombre;
    this->apellido=apellido;
    this->carrera=carrera;
    this->ingreso=ingreso;
    this->cursosInscritos =ListaCursos();
}

void Alumno::toString(){
    std::cout<<"id: "<<id<<" /Nombre: "<<nombre<<" /Apellido: "<<apellido<<" /Carrera: "<< carrera<<"/Fecha ingreso: "<<ingreso<<std::endl;
}
Alumno:: ~Alumno(){}
std::string Alumno::getNombre(){return nombre;}
std::string Alumno::getApellido(){return apellido;} 
std::string Alumno::getCarrera(){return carrera;}
std::string Alumno::getIngreso(){return ingreso;}
void Alumno:: inscribirC(Curso* curso){
    this->cursosInscritos.insertarCurso(curso);
}

void Alumno:: eliminarC(int idCurso){
    cursosInscritos.eliminarCurso(idCurso);
}
int Alumno:: getId(){return id;}