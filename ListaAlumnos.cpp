#include "ListaAlumnos.h"
#include "NodoAlumno.h"
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
    // si es que la head no es null
    NodoAlumno* aux = newNode;
    while(aux!=nullptr){
        newNode->siguiente=head;
        head = newNode;
    }
}
ListaAlumnos::~ListaAlumnos(){
    //eliminar la lista de alumnos
    NodoAlumno* aux = head;
    while(aux != nullptr){
        NodoAlumno* aux2 = aux;
        aux = aux->siguiente;
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
    while(aux!= nullptr && aux->alumno->getId() != id){
        aux = aux -> siguiente; 
    }
    if(aux == nullptr){
        std:: cout<<"Alumno no encontrado"<<std::endl;
        return;
    } else{
        head = aux->siguiente;
    }
    delete aux;
}

Alumno* ListaAlumnos:: buscarAlumnoId(int id){
    NodoAlumno* aux = head;
    while (aux != nullptr && aux->alumno->getId()!=id){
        aux = aux-> siguiente;
    }
    if(aux == nullptr){
        std::cout<<"Alumno no encontrado"<<std::endl;
    }else{
        std::cout<<"Alumno encontrado!"<<std::endl;
        std::cout<<aux->alumno->toString()<<std::endl;
    }
}

Alumno* ListaAlumnos:: buscarAlumnoNombre(string nombre){
    NodoAlumno* aux = head;
    while (aux != nullptr){
        if(aux->alumno->getNombre()== nombre){
             std::cout<<aux->alumno->toString()<<std::endl;
        }
        aux = aux->siguiente;
    }
    if(aux == nullptr){
        std::cout<<"Nombre no registrado."<<std::endl;
    }
}