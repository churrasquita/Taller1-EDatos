#include "Nota.h"
#include <iostream>

Nota::Nota(double valor){
    this->nota = valor;
}
double Nota::getNota(){return this->nota;}
void Nota::setNota(double valor){this->nota = valor;}
Nota::~Nota(){}

