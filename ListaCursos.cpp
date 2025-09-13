#include "ListaCursos.h"
#include "Curso.h"
#include <string>
#include <iostream>

ListaCursos::ListaCursos(){
    this->head = nullptr;
}

ListaCursos::~ListaCursos(){
    NodoCurso* aux = head;
    while(aux != nullptr){
        NodoCurso* aux2 = aux;
        aux = aux->getSiguiente();
        delete aux2;
    }
}

void ListaCursos::insertarCurso(Curso* curso){
    NodoCurso* newNode = new NodoCurso(curso);
    if (head == nullptr){
        head = newNode;
        return;
    } 
    // si es que head no es null
    NodoCurso* aux = head;
    while(aux->getSiguiente()!=nullptr){
        aux=aux->getSiguiente();
    }
    aux ->setSiguiente(newNode);
}
bool ListaCursos:: eliminarCurso(int id){
    if(head == nullptr){
        return false;
    }
    NodoCurso* aux = head;
    NodoCurso* aux2 = nullptr;

    while(aux!= nullptr && aux->getCurso()->getId() != id) {
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

Curso* ListaCursos:: buscarCursoId(int id){
    NodoCurso* aux = head;
    while (aux != nullptr){
        if(aux->getCurso()->getId()== id){
             return aux->getCurso();
        }
        aux = aux-> getSiguiente();
    }
    return nullptr;
}

void ListaCursos:: buscarCursoNombre(std::string nombre){
    NodoCurso* aux = head;
    bool found = false;
    while (aux != nullptr){
        if(aux->getCurso()->getNombre()== nombre){
            aux->getCurso()->toString();
            found = true;
        }
        aux = aux->getSiguiente();
    }
    if(!found){
        std::cout<<"No existen cursos con ese nombre."<<std::endl;
    }
}

void ListaCursos:: getCursos(){
    NodoCurso* aux = head;
    if (aux == nullptr) {
        std::cout << "El alumno no está inscrito en ningún curso." << std::endl;
        return;
    }
    while (aux != nullptr) {
        aux->getCurso()->toString();
        aux = aux->getSiguiente();
    }
}