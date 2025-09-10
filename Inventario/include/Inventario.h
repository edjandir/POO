#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include <Item.h>

using namespace std;

class Inventario
{
    public:
        Inventario() {};
        void inclui_item(Item& it);
        void mostra();
    protected:

    private:
        vector<Item> itens;
};

#endif // INVENTARIO_H
