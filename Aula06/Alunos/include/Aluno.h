#ifndef ALUNO_H
#define ALUNO_H

#include <Pessoa.h>


class Aluno : public Pessoa
{
    public:
        Aluno(string n, string e, unsigned short int i,
              string c,string m) :
                Pessoa(n, e, i), matricula(m), curso(c) {};

        string Getmatricula() { return matricula; }
        void Setmatricula(string val) { matricula = val; }
        string Getcurso() { return curso; }
        void Setcurso(string val) { curso = val; }

        void mostra();

    protected:

    private:
        string matricula;
        string curso;
};

#endif // ALUNO_H
