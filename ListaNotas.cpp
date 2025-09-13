#include "ListaNotas.h"
#include <iostream>

ListaNotas::ListaNotas() {
    head = nullptr;
}

ListaNotas::~ListaNotas() {
    NodoNota* aux = head;
    while (aux != nullptr) {
        NodoNota* aux2 = aux;
        aux = aux -> getSiguiente();
        delete aux2;
    }
}
void ListaNotas::insertarNotas(double nota) {
    NodoNota* newNodo = new NodoNota(nota);
    if (head == nullptr) {
        head = newNodo;
        return;
    }
    NodoNota* aux = head;
    while (aux -> getSiguiente() != nullptr) {
        aux = aux -> getSiguiente();
    }
    aux -> setSiguiente(newNodo);
}
NodoNota* ListaNotas::getNodoNota() {
    return this -> head;
}

double ListaNotas:: calcularPromedio(){
    if(head == nullptr){
        return 0.0;
    }
    NodoNota* aux = head;
    double sum = 0.0;
    while(aux!=nullptr){
        sum += aux->getNota();
        aux = aux -> getSiguiente();
    }
}