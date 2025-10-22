#include "Estudante.h"

Estudante::Estudante()
{
    //ctor
}

void Estudante::lerDadosEducacao() {
    cout << "Informe o nome da universidade onde estudou: ";
    cin >> universidade;
    cout << "Informe o grau obtido \n";
    cout << " (bacharel, especialista, mestre, doutor): ";
    cin >> titulacao;
}

void Estudante::mostraDadosEducacao() {
    cout << "\nUniversidade: " << universidade;
    cout << "\nGrau obtido: " << titulacao;
}
