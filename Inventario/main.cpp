#include <iostream>
#include <locale.h>

#include <Item.h>
#include <Inventario.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    //Criando um objeto da classe Item
    Item item1("Banana", "Fruta", 5);

    //Criando mais um objeto da classe Item
    Item item2("Arroz", "Grão", 3);

    //criando um inventario
    Inventario inventario;

    //incluindo os itens no inventario
    inventario.inclui_item(item1);
    inventario.inclui_item(item2);

    //mostrando o inventario
    inventario.mostra();



}

