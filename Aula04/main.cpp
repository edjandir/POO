#include <iostream>

#include <Pessoa.h>
#include <locale.h>

#include <UF.h>
#include <Cidade.h>

using namespace std;

//void mostra_pessoa(Pessoa);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Pessoa p1;
    Pessoa p2("Jos� Carlos", "01/12/1985");
    Pessoa p3("Geovana", "18/12/2004");

////    system("PAUSE");


    p1.Setnome("Arthur");
    p1.Setdata_nascimento("10/10/2005");

    p1.mostra();
    p2.mostra();
    p3.mostra();

    UF uf1("SC", "Santa Catarina");
    uf1.mostra();

    Cidade c1("Tubar�o", uf1);
    c1.mostra();

    return 0;

    //Crie a classe UF com os atributos sigla e nome
    //Crie a classe Cidade com os atributos nome e UF

    //N�o esque�a dos construtores (com e sem par�metros),
    //fun��es Get e Set e a fun��o mostra()


    /*
        Personagem p1("X", 10, 1, 1);
        Personagem p2("Y", 10, 1, 1);

        p1.atacar(p2);

        //Na classe
        void Personagem::atacar(Personagem p) {
            if (nome == p.Getnome()) {
                cout << " N�o pode atacar a si mesmo";
                return;
            }
            cout << "Atacando " << p.Getnome() <<
                " com for�a " << forca;
            p.Setdano(1);
        }

        void Personagem::Setdano(int d) {
            vida -= d;
            if (vida <= 0 ) {
                cout << "Personagem " << nome << " morreu.";
                vida = 0;
            }
        }


    */
}

/*
void mostra_pessoa(Pessoa p) {
    cout << "Nome: " << p.Getnome() << "\nData de nascimento: "
        << p.Getdata_nascimento() << endl;
}
*/
