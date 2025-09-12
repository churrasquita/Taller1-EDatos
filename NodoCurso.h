#pragma once
class Curso;

class NodoCurso{
    private:
        Curso* curso;
        NodoCurso* siguiente;
    public:
        NodoCurso(Curso* curso);
        NodoCurso* getSiguiente();
        Curso* getCurso();
        void setSiguiente(NodoCurso* Curso);
        ~NodoCurso();
};