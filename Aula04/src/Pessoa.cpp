#include "Pessoa.h"

Pessoa::Pessoa()
{
    cout << "Pessoa " << nome << " criada!" << endl;
}

Pessoa::~Pessoa()
{
   // cout << "Pessoa " << nome << " destruída!" << endl;
}

void Pessoa::mostra() {
    cout << "Nome: " << Getnome() << "\nData de nascimento: "
        << Getdata_nascimento() << endl;
}
