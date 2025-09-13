#pragma once
#include "NodoNota.h"
#include <string>

class ListaNotas{
    private:
        NodoNota* head;
    public:
        ListaNotas();
        ~ListaNotas();
        NodoNota* getNodoNota();
        void insertarNotas(double nota);
        double calcularPromedio();
};