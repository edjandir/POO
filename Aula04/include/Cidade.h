#ifndef CIDADE_H
#define CIDADE_H

#include <string>
#include <UF.h>

using namespace std;

class Cidade
{
    public:
        Cidade() {};
        Cidade(string n, UF u): nome(n), uf(u) {}
        string Getnome() { return nome; }
        void Setnome(string val) { nome = val; }
        UF Getuf() { return uf; }
        void Setuf(UF val) { uf = val; }

        void mostra();
    protected:
    private:
        string nome;
        UF uf;
};

#endif // CIDADE_H
