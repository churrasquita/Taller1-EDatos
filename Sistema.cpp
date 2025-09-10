#include<iostream>
#include "Alumno.h"
#include "Curso.h"

using namespace std;
void eliminarCurso(){
    //POR COMPLETAR
}
void buscarCurso(){
    //POR COMPLETAR
}
void registrarCurso(){
    // falta control de errores
    int id;
    int maxAlumnos;
    string nombre;
    string carrera;
    string profesor;
    cout<<"Ingrese los datos del curso: "<<endl;
    cout<<"- id: "<<endl;
    cin>>id;
    cout<<"- Nombre: "<<endl;
    cin>>nombre;
    cout<<"- Maxima cantidad de alumnos: "<<endl;
    cin>>maxAlumnos;
    cout<<"- Carrera: "<<endl;
    cin>>carrera;
    cout<<"- Profesor: "<<endl;
    cin>>profesor;
    Curso* nuevo = new Curso(id,maxAlumnos,nombre, carrera, profesor);
    cout<<"Curso registrado!"<<endl;

}

void registrarAlumno(){
    // REVISAR CONTROL ERRORES
    int id;
    string nombre;
    string apellido;
    string carrera;
    string fechaIngreso;
    cout<<"Ingrese los datos del alumno: "<<endl;
    cout<<"- id: "<<endl;
    cin>>id;
    cout<<"- Nombre: "<<endl;
    cin>>nombre;
    cout<<"- Apellido: "<<endl;
    cin>>apellido;
    cout<<"- Carrera: "<<endl;
    cin>>carrera;
    cout<<"- Fecha de ingreso: "<<endl;
    cin>>fechaIngreso;
    Alumno* nuevo = new Alumno(id,nombre,apellido, carrera, fechaIngreso);
    cout<<"Alumno registrado!"<<endl;
}

void buscarAlumno(){
    //POR COMPLETAR
}
void eliminarAlumno(){
    int idBuscar;
    cout<<"Ingrese el id del alumno a eliminar: "<<endl;
    cin>>idBuscar;
    bool encontrado;
    //POR COMPLETAR
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