#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

void Funcionario::lerDados() {
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "Digite seu numero de identificacao: ";
    cin >> id;
}
void Funcionario::mostraDados() {
    cout << "\nNome: " << nome;
    cout << "\nNo. identificacao: " << id;
}

