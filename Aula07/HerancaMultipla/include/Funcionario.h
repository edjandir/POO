#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

using namespace std;

#define MAX 100

class Funcionario
{
    public:
        Funcionario();
        void lerDados();
        void mostraDados();

    protected:

    private:
        char nome[MAX];
        unsigned long id;
};

#endif // FUNCIONARIO_H
