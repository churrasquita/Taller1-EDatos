#include "Curso.h"
#include "Alumno.h"
#include <string>
#include <iostream>

int Curso::contador=0;

Curso::Curso(int maxEstudiantes, std::string nombre, std::string carrera, std::string profesor){
    this->id= ++contador;
    this->maxEstudiantes = maxEstudiantes;
    this->nombre = nombre;
    this->carrera = carrera;
    this->profesor= profesor;
    this->cantInscritos= 0;
    this->alumnosCurso= ListaAlumnos();
}
int Curso::getId(){return id;}
int Curso::getMaxEst(){return maxEstudiantes;}
std::string Curso::getNombre(){return nombre;}
std::string Curso::getCarrera(){return carrera;}
std::string Curso::getProfesor(){ return profesor;}
void Curso:: inscribirAlumno(Alumno* alumno){
    if(this->cantInscritos>=this->maxEstudiantes){
        std::cout<<"El curso está completo!"<<std::endl;
        return;
    }
    this->alumnosCurso.insertarAlumno(alumno);
    alumno -> inscribirC(this);
    cantInscritos++;
    std::cout<<"Alumno inscrito correctamente en "<<this->nombre<<", cantidad inscritos: " <<cantInscritos<<std::endl;
    std::cout<<"Datos alumno:"<<std::endl;
    alumno->toString();
}
bool Curso::eliminarAlumnoCurso(Alumno* alumno){
    if(this->alumnosCurso.eliminarInscripciones(alumno->getId())){
        alumno->eliminarC(this->getId());
        cantInscritos--;
        return true;
    }
    return false;
}

void Curso::toString(){
    std::cout<<"id: "<<id<<" /Curso: "<<nombre<<" /Max estudiantes: "<<maxEstudiantes<<" /Carrera:"<< carrera<<"/Profesor: "<<profesor<<std::endl;
}

bool Curso:: registrarNota(int idAlumno, double nota){
    if(nota<1.0 || nota>7.0){
        return false;
    }
    NodoAlumno* nodoAlumno = alumnosCurso.buscarNodoAlumno(idAlumno);
    if (nodoAlumno == nullptr) return false;
    nodoAlumno->getNotas().insertarNotas(nota);
    return true;
}
double Curso::promedioAlumno(int idAlumno) {
        NodoAlumno* alumno= alumnosCurso.buscarNodoAlumno(idAlumno);
        if (alumno == nullptr) return 0.0;
        return alumno->getNotas().calcularPromedio();
    }

Curso::~Curso(){}