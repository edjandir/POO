#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <Funcionario.h>
#include <Estudante.h>

class Professor: private Funcionario, private Estudante
{
    public:
        Professor();
        void lerDados();
        void mostraDados();

    protected:

    private:
        int cursos;
};

#endif // PROFESSOR_H
