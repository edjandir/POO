#include "Medico.h"

void Medico::mostra() {
    Pessoa::mostra();
    cout << "\nCRM: " << crm << "\nEspecialidade: " << especialidade;
}
