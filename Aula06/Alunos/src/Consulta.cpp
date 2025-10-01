#include "Consulta.h"

void Consulta::mostra() {
    cout << "\n\n======= Consulta =========" << endl;
    cout << "Data: " << data << endl;
    cout << "Paciente: " << paciente->Getnome() << endl;
    cout << "Médico: " << medico->Getnome() << endl;
    cout << "Especialidade: " << medico->Getespecialidade() << endl;
}
