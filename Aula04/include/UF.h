#ifndef UF_H
#define UF_H

#include <string>

using namespace std;

class UF
{
    public:
        UF() {};
        UF(string s, string n): sigla(s), nome(n) {}
        string Getsigla() { return sigla; }
        void Setsigla(string val) { sigla = val; }
        string Getnome() { return nome; }
        void Setnome(string val) { nome = val; }

        void mostra();
    protected:
    private:
        string sigla;
        string nome;
};

#endif // UF_H
