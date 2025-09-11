#pragma once

class Nota{
    private:
        double nota;
    public:
        Nota(double valor);
        double getNota();
        void setNota(double nota);
        ~Nota();
};