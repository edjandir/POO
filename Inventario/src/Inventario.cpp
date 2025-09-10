#include "Inventario.h"

//inclui um item na lista
void Inventario::inclui_item(Item& it) {
    itens.push_back(it);
}

void Inventario::mostra() {
    for(unsigned int i=0; i < itens.size(); i++) {
        itens[i].mostra();
    }
}
