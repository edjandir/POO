#include "Inventario.h"

//inclui um item na lista
void Inventario::inclui_item(Item& it) {
    itens.push_back(it);
}

void Inventario::mostra() {
    cout << "\nDono do inventário...";
    personagem.mostra();
    for(unsigned int i=0; i < itens.size(); i++) {
        itens[i].mostra();
    }
}

Item* Inventario::busca_item(string nome) {
    Item* result = nullptr;
    for(int i=0; i < itens.size(); i++) {
        if (itens[i].Getnome().compare(nome)== 0) {
            result = &itens[i];
            break;
        }
    }
    return result;
}
