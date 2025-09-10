#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include <Item.h>
#include <Personagem.h>

#include <iostream>

using namespace std;

class Inventario
{
    public:
        Inventario(Personagem p) : personagem(p) {};
        void inclui_item(Item& it);
        void mostra();
        Item* busca_item(string nome);
    protected:

    private:
        vector<Item> itens;
        Personagem personagem;
};

#endif // INVENTARIO_H
