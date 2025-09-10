#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>

using namespace std;

class Personagem
{
    public:
        Personagem() {};
        Personagem(string n, int v, int f, int nv):
            nome(n), vida(v), forca(f), nivel(nv){}

        string Getnome() { return nome; }
        void Setnome(string val) { nome = val; }
        int Getvida() { return vida; }
        void Setvida(int val) { vida = val; }
        int Getforca() { return forca; }
        void Setforca(int val) { forca = val; }
        int Getnivel() { return nivel; }
        void Setnivel(int val) { nivel = val; }

        void mostra();

    protected:

    private:
        string nome;
        int vida;
        int forca;
        int nivel;
};

#endif // PERSONAGEM_H
