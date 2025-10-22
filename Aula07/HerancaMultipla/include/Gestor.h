#ifndef GESTOR_H
#define GESTOR_H

#define MAX 100

#include <iostream>
#include <Funcionario.h>
#include <Estudante.h>

using namespace std;

class Gestor: private Funcionario, private Estudante
{
    public:
        Gestor();
        void lerDados();
        void mostraDados();

    protected:

    private:
        char cargo[MAX];
        double salario;
};

#endif // GESTOR_H
