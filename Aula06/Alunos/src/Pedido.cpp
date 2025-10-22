#include "Pedido.h"

Pedido::Pedido(Cliente* c, string dt)
{
    cliente = c;
    data = dt;
}


void Pedido::inclui_item(PedidoItem it) {
    itens.push_back(it);
}

void Pedido::mostra() {
    string result = "\nCliente: " + cliente->Getnome();
    result += "\nData: " + data;
    result += "\nLista de itens: ";

    for(PedidoItem item: itens) {
        result += item.to_string();
    }

    result += get_total();
    cout << result;
}
