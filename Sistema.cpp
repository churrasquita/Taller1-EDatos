#include<iostream>
#include "Alumno.h"
#include "Curso.h"

using namespace std;

void gestionarAlumnos(){
    int op = 0;
}

void gestionarCursos(){
    int op = 0;
}

void gestionarInscripciones(){
    int op = 0;
}
void gestionarNotas(){
    int op = 0;
}

void gestionarReportes(){
    int op = 0;
}

int main(){
    cout<<"----- BIENVENID@ -----"<<endl;
    cout<<"Sistema de gestión académica 📝"<<endl;
    //menú principal
    int op = 0;
    while(op!=6){
        cout<<"----- MENÚ PRINCIPAL -----"<<endl;
        cout<<"1) Alumnos"<<endl;
        cout<<"2) Cursos"<<endl;
        cout<<"3) Inscripciones"<<endl;
        cout<<"4) Notas"<<endl;
        cout<<"5) Consultas y reportes"<<endl;
        cout<<"Opción: "<<endl;
        cin>> op;
        cout<<endl;
        if (op == 1){gestionarAlumnos();}
        else if(op == 2){gestionarCursos();}
        else if(op == 3){gestionarInscripciones();}
        else if(op == 4){gestionarNotas();}
        else if(op == 5){gestionarReportes();}
        else if(op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6){
            cout<<"❌ Opción inválida, intente nuevamente. "<<endl;
        }
    }
    cout<<"Gracias por utilizar el sistema 🗂️"<<endl;
    return 0;
}