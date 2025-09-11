#include "Alumno.h"
#include "NodoAlumno.h"
#include <string>
#include <iostream>

NodoAlumno::NodoAlumno(Alumno& alumno){
    this->alumno= &alumno;
    this->siguiente=nullptr;
}
NodoAlumno* NodoAlumno::getSiguiente(){ return this-> siguiente;}
void NodoAlumno::setSiguiente(NodoAlumno* alumno){this->siguiente = alumno;}
Alumno* NodoAlumno:: getAlumno(){return this->alumno;}
NodoAlumno:: ~NodoAlumno(){
    std::cout << "Alumno eliminado." << std::endl;
    delete alumno;
    alumno = nullptr; 
}