#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

class Pessoa
{
    public:
        Pessoa(string n, string e, unsigned short int i)
            : nome(n), email(e), idade(i) {};

        string Getnome() { return nome; }
        void Setnome(string val) { nome = val; }
        string Getemail() { return email; }
        void Setemail(string val) { email = val; }
        unsigned short int Getidade() { return idade; }
        void Setidade(unsigned short int i) { idade = i; }

        void mostra();

    protected:

    private:
        string nome;
        string email;
        unsigned short int idade;
};

#endif // PESSOA_H
