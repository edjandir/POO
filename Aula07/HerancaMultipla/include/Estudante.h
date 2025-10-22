#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include <iostream>

using namespace std;

#define MAX 100

class Estudante
{
    public:
        Estudante();

        void lerDadosEducacao();

        void mostraDadosEducacao();

    protected:

    private:
        char universidade[MAX];
        char titulacao[MAX];
};

#endif // ESTUDANTE_H
