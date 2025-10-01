#include "Aluno.h"

void Aluno::mostra() {
    Pessoa::mostra();
    cout << "\nCurso: " << curso << "\nMatrícula:"
        << matricula;
}
