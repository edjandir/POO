#include "Item.h"

void Item::mostra() {
    cout << "\n===== Item ====="
        << "\nNome: " << Getnome() << "\nTipo: " << Gettipo()
        << "\nValor: " << Getvalor() << endl;
}
