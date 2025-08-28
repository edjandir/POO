#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

class Pessoa
{
    public:
        Pessoa(); // constructor
        Pessoa(string nome, string data_nascimento){
            this->nome = nome; this->data_nascimento = data_nascimento;
        }
        virtual ~Pessoa(); //destructor

        string Getnome() { return nome; }
        void Setnome(string val) { nome = val; }
        string Getdata_nascimento() { return data_nascimento; }
        void Setdata_nascimento(string val) { data_nascimento = val; }

        void mostra();

    protected:

    private:
        string nome;
        string data_nascimento;
};

#endif // PESSOA_H
