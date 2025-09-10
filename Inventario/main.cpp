#include <iostream>
#include <locale.h>

#include <Item.h>
#include <Inventario.h>
#include <Personagem.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Criando um personagem
    Personagem p("Arqueiro", 10, 2, 1);

    //Criando um objeto da classe Item
    Item item1("Banana", "Fruta", 5);

    //Criando mais um objeto da classe Item
    Item item2("Arroz", "Grão", 3);

    //criando um inventario
    Inventario inventario(p);

    //incluindo os itens no inventario
    inventario.inclui_item(item1);
    inventario.inclui_item(item2);

    //mostrando o inventario
    inventario.mostra();

    cout << endl << "\nBuscando item com o nome Cebola...";
    Item* item = inventario.busca_item("Cebola");
    if (item != nullptr) {
        item->mostra();
    } else {
        cout << "\nItem não encontrado!" << endl;
    }


}

