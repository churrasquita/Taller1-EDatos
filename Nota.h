#pragma once

class Nota{
    private:
        double nota;
    public:
        Nota(int valor);
        double getNota();
        void setNota(double nota);
        ~Nota();
};