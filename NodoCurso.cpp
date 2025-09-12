#include "Curso.h"
#include "NodoCurso.h"
#include <string>
#include <iostream>

NodoCurso::NodoCurso(Curso* curso){
    this->curso= curso;
    this->siguiente=nullptr;
}
NodoCurso* NodoCurso::getSiguiente(){return this-> siguiente;}
void NodoCurso::setSiguiente(NodoCurso* curso){this->siguiente = curso;}
Curso* NodoCurso:: getCurso(){return this->curso;}
NodoCurso:: ~NodoCurso(){
    delete curso;
    curso = nullptr; 
}