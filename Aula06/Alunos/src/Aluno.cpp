#include "Aluno.h"

void Aluno::mostra() {
    Pessoa::mostra();
    cout << "\nCurso: " << curso << "\nMatr�cula:"
        << matricula;
}
