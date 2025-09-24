#ifndef CONTA_H
#define CONTA_H

#include <iostream>

using namespace std;

class Conta
{
    public:
        Conta() {};
        Conta(string n, double s): nome(n), saldo(s) {}

        string Getnome() { return nome; }
        void Setnome(string val) { nome = val; }
        double Getsaldo() { return saldo; }
        void Setsaldo(double val) { saldo = val; }

        void operator += (double valor);
        void operator -= (double valor);

        friend void mostra(Conta);

    protected:

    private:
        string nome;
        double saldo;
};

#endif // CONTA_H
