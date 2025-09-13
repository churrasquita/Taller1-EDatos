#include "NodoNota.h"
#include <string>

NodoNota::NodoNota(double nota) {
    this -> nota = nota;
    this -> siguiente = nullptr; 
}

NodoNota* NodoNota::getSiguiente() {
    return this -> siguiente;
}

void NodoNota::setSiguiente(NodoNota* nuevo) {
    this -> siguiente = nuevo;
}

double NodoNota::getNota() {
    return nota;
}
NodoNota::~NodoNota() {}