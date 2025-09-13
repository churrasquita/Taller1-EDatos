#include "NodoAlumno.h"
#include "Alumno.h"
#include <string>

NodoAlumno::NodoAlumno(Alumno* alumno){
    this->alumno= alumno;
    this->siguiente=nullptr;
}
NodoAlumno* NodoAlumno::getSiguiente(){ return this-> siguiente;}
void NodoAlumno::setSiguiente(NodoAlumno* alumno){this->siguiente = alumno;}
Alumno* NodoAlumno:: getAlumno(){return this->alumno;}
ListaNotas& NodoAlumno::getNotas() {return notas;}
NodoAlumno:: ~NodoAlumno(){
    delete alumno;
    alumno = nullptr; 
}