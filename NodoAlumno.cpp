#include "NodoAlumno.h"
#include <string>
#include "Alumno.h"

NodoAlumno::NodoAlumno(Alumno* alumno){
    this->alumno= alumno;
    this->siguiente=nullptr;
}
NodoAlumno* NodoAlumno::getSiguiente(){ return this-> siguiente;}
void NodoAlumno::setSiguiente(NodoAlumno* alumno){this->siguiente = alumno;}
Alumno* NodoAlumno:: getAlumno(){return this->alumno;}
NodoAlumno:: ~NodoAlumno(){
    delete alumno;
    alumno = nullptr; 
}