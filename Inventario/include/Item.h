#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item
{
    public:
        Item(){}
        Item(string n, string t, float v):
            nome(n), tipo(t), valor(v) {}
        string Getnome() { return nome; }
        void Setnome(string val) { nome = val; }
        string Gettipo() { return tipo; }
        void Settipo(string val) { tipo = val; }
        float Getvalor() { return valor; }
        void Setvalor(float val) { valor = val; }
        void mostra();

    protected:

    private:
        string nome;
        string tipo;
        float valor;
};

#endif // ITEM_H
