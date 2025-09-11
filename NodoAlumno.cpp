#include "Alumno.h"
#include "NodoAlumno.h"
#include <string>
#include <iostream>
NodoAlumno::NodoAlumno(Alumno& alumno){
    this->alumno=alumno;
    this->siguiente=null;
}
NodoAlumno* NodoAlumno::getSiguiente(){ return this-> siguiente;}
void NodoAlumno::setSiguiente(Alumno& siguiente){this->siguiente = siguiente;}
NodoAlumno* NodoAlumno:: getAlumno(){return this->alumno;}
NodoAlumno:: ~NodoAlumno(){
    std::cout << "Alumno eliminado." << std::endl;
    delete alumno;
    alumno = nullptr; 
}