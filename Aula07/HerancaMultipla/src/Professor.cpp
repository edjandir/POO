#include "Professor.h"

Professor::Professor()
{
    //ctor
}

void Professor::lerDados() {
    Funcionario::lerDados();
    cout << "Informe a quantidade de cursos: ";
    cin >> cursos;
    Estudante::lerDadosEducacao();
}

void Professor::mostraDados() {
    Funcionario::mostraDados();
    cout << "\nQuantidade de cursos oferecidos: " << cursos;
    Estudante::mostraDadosEducacao();
}
