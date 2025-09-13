#pragma once

class NodoNota {
    private:
        double nota;
        NodoNota* siguiente;
    public:
        NodoNota(double nota);
        NodoNota* getSiguiente();
        double getNota();
        void setSiguiente(NodoNota* nuevo);
        ~NodoNota();
};