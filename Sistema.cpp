#include<iostream>
#include "Alumno.h"
#include "Curso.h"
#include "Nota.h"
#include "NodoAlumno.h"
#include "ListaAlumnos.h"
#include "NodoCurso.h"
#include "ListaCursos.h"
using namespace std;

ListaAlumnos alumnos = ListaAlumnos();
ListaCursos cursos = ListaCursos();

void eliminarCurso(){
    int idBuscar;
    cout<<"Ingrese el id del curso a eliminar: "<<endl;
    cin>>idBuscar;
    bool eliminado = cursos.eliminarCurso(idBuscar);
    if(eliminado){
        cout<<"El curso pudo ser eliminado con exito!!! (id: "<<idBuscar<<")"<<endl;
    } else{
        cout<<"No se pudo eliminar el curso (id: "<<idBuscar<<")"<<endl;
    }
}
void buscarCurso(){
    string param;
    cout<<"Desea buscar por id o nombre? ";
    cin>>param;
    while(param != "id" && param != "nombre"){
        cout<<"¿Desea buscar por id o nombre?"<<endl;
        cin>>param;
    }
    if(param == "id"){
        cout<<"Ingrese id a buscar: ";
        int id;cin>>id;
        Curso* curso = cursos.buscarCursoId(id);
        if(curso == nullptr){
            cout<<"El curso no existe."<<endl;
        } else{
            curso->toString();
        }
    }else if(param =="nombre"){
        cout<<"Ingrese nombre a buscar: ";
        string nombre;cin>>nombre;
        cursos.buscarCursoNombre(nombre); 
    }
}

void registrarCurso(){
    // falta control de errores
    int maxAlumnos;
    string nombre;
    string carrera;
    string profesor;
    cout<<"Ingrese los datos del curso: "<<endl;
    cout<<"- Nombre: ";
    cin>>nombre;
    cout<<"- Maxima cantidad de alumnos: ";
    cin>>maxAlumnos;
    cout<<"- Carrera: ";
    cin>>carrera;
    cout<<"- Profesor: ";
    cin>>profesor;
    Curso* nuevo = new Curso(maxAlumnos,nombre, carrera, profesor);
    cursos.insertarCurso(nuevo);
    cout<<"Curso registrado!"<<endl;
}

void registrarAlumno(){
    // REVISAR CONTROL ERRORES
    string nombre;
    string apellido;
    string carrera;
    string fechaIngreso;
    cout<<"Ingrese los datos del alumno: "<<endl;
    cout<<"- Nombre: ";
    cin>>nombre;
    cout<<"- Apellido: ";
    cin>>apellido;
    cout<<"- Carrera: ";
    cin>>carrera;
    cout<<"- Fecha de ingreso: ";
    cin>>fechaIngreso;
    Alumno* nuevo = new Alumno(nombre,apellido, carrera, fechaIngreso);
    cout<<"Alumno registrado!"<<endl;

    alumnos.insertarAlumno(nuevo);
}

void buscarAlumno(){
    string param;
    cout<<"Desea buscar por id o nombre? ";
    cin>>param;
    while(param != "id" && param != "nombre"){
        cout<<"¿Desea buscar por id o nombre?"<<endl;
        cin>>param;
    }
    if(param == "id"){
        cout<<"Ingrese id a buscar: ";
        int id;cin>>id;
        Alumno* alumno = alumnos.buscarAlumnoId(id);
        if(alumno == nullptr){
            cout<<"El alumno no existe."<<endl;
        } else{
            alumno->toString();
        }
    }else if(param =="nombre"){
        cout<<"Ingrese nombre a buscar: ";
        string nombre;cin>>nombre;
        alumnos.buscarAlumnoNombre(nombre); 
    }
}

void eliminarAlumno(){
    int idBuscar;
    cout<<"Ingrese el id del alumno a eliminar: "<<endl;
    cin>>idBuscar;
    bool eliminado = alumnos.eliminarAlumno(idBuscar);
    if(eliminado){
        cout<<"El alumno pudo ser eliminado con exito!!! (id: "<<idBuscar<<")"<<endl;
    } else{
        cout<<"No se pudo eliminar el alumno (id: "<<idBuscar<<")"<<endl;
    }
}

void gestionarAlumnos(){
    int op = 0;
    while (op != 4){
        cout<<"Gestion de alumnos"<<endl;
        cout<<"1) Registrar alumno"<<endl;
        cout<<"2) Buscar alumno"<<endl;
        cout<<"3) Eliminar alumno"<<endl;
        cout<<"4) Retornar al menu general"<<endl;
        cout<<"Opcion: ";
        cin>> op;
        cout<<endl;
        if (op == 1){registrarAlumno();}
        else if(op == 2){buscarAlumno();}
        else if(op ==3){eliminarAlumno();}
        else if(op!=1 && op!=2 && op!= 3 && op != 4){
            cout<<"Opcion invalida, intente nuevamente."<<endl;
        }
    }
    cout<<"Retornando... "<<endl;
}

void gestionarCursos(){
    int op = 0;
    while (op != 4){
        cout<<"Gestion de cursos"<<endl;
        cout<<"1) Registrar curso"<<endl;
        cout<<"2) Buscar curso"<<endl;
        cout<<"3) Eliminar curso"<<endl;
        cout<<"4) Retornar al menu general"<<endl;
        cout<<"Opcion: ";
        cin>> op;
        cout<<endl;
        if (op == 1){registrarCurso();}
        else if(op == 2){buscarCurso();}
        else if(op ==3){eliminarCurso();}
        else if(op!=1 && op!=2 && op!= 3 && op != 4){
            cout<<"Opcion invalida, intente nuevamente."<<endl;
        }
    }
    cout<<"Retornando... "<<endl;
}

void gestionarInscripciones(){
    int op = 0;
    while (op != 3){
        cout<<"Gestion de inscripciones"<<endl;
        cout<<"1) Inscribir un alumno en un curso"<<endl;
        cout<<"2) Eliminar un alumno de un curso"<<endl;
        cout<<"3) Retornar al menu general"<<endl;
        cout<<"Opcion: ";
        cin>> op;
        cout<<endl;
        if(op == 1){
            int id;
            cout<<"Ingrese el id del alumno a inscribir: ";
            cin>>id;
            Alumno* alumno = alumnos.buscarAlumnoId(id);
            if(alumno == nullptr){
                cout<<"El alumno no existe."<<endl;
            } else{
                int idCurso;
                cout<<"Ingrese el id del curso a inscribir: ";
                cin>>idCurso;
                Curso* curso = cursos.buscarCursoId(idCurso);
                if(curso == nullptr){
                    cout<<"El curso no existe."<<endl;
                } else {
                    curso->inscribirAlumno(alumno);
                    cout<<"Alumno inscrito con exito!"<<endl;
                }
            }
        }else if(op == 2){
            int id;
            cout<<"Ingrese el id del alumno a eliminar: ";
            cin>>id;
            Alumno* alumno = alumnos.buscarAlumnoId(id);
            if(alumno == nullptr){
                cout<<"El alumno no existe."<<endl;
            } else{
                int idCurso;
                cout<<"Ingrese el id del curso a aliminar: ";
                cin>>idCurso;
                Curso* curso = cursos.buscarCursoId(idCurso);
                if(curso == nullptr){
                    cout<<"El curso no existe."<<endl;
                } else {
                    bool realizado = curso->eliminarAlumnoCurso(alumno);
                    if(realizado){cout<<"Alumno eliminado con exito!"<<endl;}
                    else cout<<"El alumno no está inscrito en ese curso."<<endl;
                }   
            }

        }

    }
    cout<<"Retornando... "<<endl;
}
void gestionarNotas(){
    //vector<double> notas;
    int cant = 0;
    bool stop = false;
    string elecc;
    while (!stop){
        cout<<"Gestion de notas"<<endl;
        cout<<"Ingrese la cantidad de notas a ingresar:"<<endl;
        cin>>cant;
        cout<<"¿Desea seguir ingresando notas? (si/no): ";
        cin>> elecc; 
        if(elecc=="si"){
            stop = true;
            break;
        cout<<endl;
        }
    }
    cout<<"Retornando... "<<endl;
}

void gestionarReportes(){
    int op = 0;
    while (op != 5){
        cout<<"Gestion de reportes 📚"<<endl;
        cout<<"1) Obtener todos los alumnos de una carrera"<<endl;
        cout<<"2) Obtener todos los cursos de un alumno"<<endl;
        cout<<"3) Promedio de notas de un alumno en un curso"<<endl;
        cout<<"4) Promedio de notas general"<<endl;
        cout<<"6) Retornar al menu general"<<endl;
        cout<<"Opcion: ";
        cin>> op;
        cout<<endl;
    }
    cout<<"Retornando... "<<endl;
}

int main(){
    cout<<"----- BIENVENID@ -----"<<endl;
    cout<<"Sistema de gestion academica"<<endl;
    //menú principal
    int op = 0;
    while(op!=6){
        cout<<"----- MENU PRINCIPAL -----"<<endl;
        cout<<"1) Alumnos"<<endl;
        cout<<"2) Cursos"<<endl;
        cout<<"3) Inscripciones"<<endl;
        cout<<"4) Notas"<<endl;
        cout<<"5) Consultas y reportes"<<endl;
        cout<<"6) Salir del sistema"<<endl;
        cout<<"Opcion: ";
        cin>> op;
        cout<<endl;
        if (op == 1){gestionarAlumnos();}
        else if(op == 2){gestionarCursos();}
        else if(op == 3){gestionarInscripciones();}
        else if(op == 4){gestionarNotas();}
        else if(op == 5){gestionarReportes();}
        else if(op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6){
            cout<<"Opcion invalida, intente nuevamente. "<<endl;
        }
    }
    cout<<"Gracias por utilizar el sistema :)!"<<endl;
    return 0;
}   