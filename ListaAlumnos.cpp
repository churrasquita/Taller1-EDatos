#include "ListaAlumnos.h"
#include "Alumno.h"
#include <string>
#include <iostream>

ListaAlumnos::ListaAlumnos(){
    this->head = nullptr;
}
void ListaAlumnos::insertarAlumno(Alumno& alumno){
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
    std::cout<<"Alumnos eliminados."<<std::endl;
}

void ListaAlumnos:: eliminarAlumno(int id){
    if(head == nullptr){
        std::cout<<"No existen alumnos que eliminar"<<std::endl;
        return;
    }
    NodoAlumno* aux = head;
    NodoAlumno* aux2 = nullptr;

    while(aux!= nullptr && aux->getAlumno()->getId() != id){
        aux2 = aux;
        aux = aux -> getSiguiente(); 
    }
    if(aux == nullptr){
        std:: cout<<"Alumno no encontrado"<<std::endl;
        return;
    }if(aux2 == nullptr){
        head = aux->getSiguiente();
    }else{
        aux2 ->setSiguiente(aux->getSiguiente());
    }
    delete aux;
    std:: cout<<"Se ha eliminado el alumno."<<std::endl;
}

Alumno* ListaAlumnos:: buscarAlumnoId(int id){
    NodoAlumno* aux = head;
    while (aux != nullptr && aux->getAlumno()->getId()!=id){
        if(aux->getAlumno()->getId()== id){
            Alumno* encontrado = aux->getAlumno();
            return encontrado;
        }
        aux = aux-> getSiguiente();
    }
    return nullptr;
    
}

Alumno* ListaAlumnos:: buscarAlumnoNombre(std::string nombre){
    NodoAlumno* aux = head;
    while (aux != nullptr){
        if(aux->getAlumno()->getNombre()== nombre){
            Alumno* encontrado = aux->getAlumno();
            return encontrado;
        }
        aux = aux->getSiguiente();
    }
    return nullptr;
}