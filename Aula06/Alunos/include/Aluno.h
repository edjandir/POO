#ifndef ALUNO_H
#define ALUNO_H

#include <Pessoa.h>


class Aluno : public Pessoa
{
    public:
        Aluno();

        string Getmatricula() { return matricula; }
        void Setmatricula(string val) { matricula = val; }
        string Getcurso() { return curso; }
        void Setcurso(string val) { curso = val; }

    protected:

    private:
        string matricula;
        string curso;
};

#endif // ALUNO_H
