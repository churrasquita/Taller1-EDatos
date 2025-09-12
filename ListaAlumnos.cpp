#include "ListaAlumnos.h"
#include "Alumno.h"
#include <string>
#include <iostream>

ListaAlumnos::ListaAlumnos(){
    this->head = nullptr;
}
void ListaAlumnos::insertarAlumno(Alumno* alumno){
    NodoAlumno* newNode = new NodoAlumno(alumno);
    if (head == nullptr){
        head = newNode;
        return;
    } 
    // si es que head no es null
    NodoAlumno* aux = head;
    while(aux->getSiguiente()!=nullptr){
        aux=aux->getSiguiente();
    }
    aux ->setSiguiente(newNode);
}

ListaAlumnos::~ListaAlumnos(){
    //eliminar la lista de alumnos
    NodoAlumno* aux = head;
    while(aux != nullptr){
        NodoAlumno* aux2 = aux;
        aux = aux->getSiguiente();
        delete aux2;
    }
}

bool ListaAlumnos:: eliminarAlumno(int id){
    if(head == nullptr){
        return false;
    }
    NodoAlumno* aux = head;
    NodoAlumno* aux2 = nullptr;

    while(aux!= nullptr && aux->getAlumno()->getId() != id) {
       aux2=aux;
       aux = aux-> getSiguiente();
    }
    if(aux == nullptr){
        return false;
    }
    if(aux2 == nullptr){
        head = aux->getSiguiente();
    }else{
        aux2 ->setSiguiente(aux->getSiguiente());
    }
    delete aux;
    return true;
}

Alumno* ListaAlumnos:: buscarAlumnoId(int id){
    NodoAlumno* aux = head;
    while (aux != nullptr){
        if(aux->getAlumno()->getId()== id){
             return aux->getAlumno();
        }
        aux = aux-> getSiguiente();
    }
    return nullptr;
}

void ListaAlumnos:: buscarAlumnoNombre(std::string nombre){
    NodoAlumno* aux = head;
    bool found = false;
    while (aux != nullptr){
        if(aux->getAlumno()->getNombre()== nombre){
            aux->getAlumno()->toString();
            found = true;
        }
        aux = aux->getSiguiente();
    }
    if(!found){
        std::cout<<"No existen alumnos con ese nombre."<<std::endl;
    }
}