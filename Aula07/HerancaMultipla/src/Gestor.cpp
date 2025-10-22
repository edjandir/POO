#include "Gestor.h"

Gestor::Gestor()
{
    //ctor
}

void Gestor::lerDados() {
    Funcionario::lerDados();
    cout << "Informe seu cargo: ";
    cin >> cargo;
    cout << "Informe seu salario: ";
    cin >> salario;
    Estudante::lerDadosEducacao();
}

void Gestor::mostraDados() {
    Funcionario::mostraDados();
    cout << "\nCargo: " << cargo;
    cout << "\nSalario do gestor R$: " << salario;
    Estudante:: mostraDadosEducacao();
}
