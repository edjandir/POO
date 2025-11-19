#include <iostream>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
    /*
    Exemplo de list
    list<int> numeros = {1, 2, 2, 5, 3};
    int maior = numeros.front();

    numeros.push_back(4);

    for(int n : numeros) {
        if (n > maior) maior = n;
    }

    cout << "o maior número da lista é: " << maior;
    return 0;*/

    /* Exemplo do Set
    set<string> nomes = {"Ana", "Bruno", "Carlos"};
    nomes.insert("Adriana");
    nomes.insert("Adriana");

    for (string nome : nomes) {
        cout << nome << endl;
    }
    */

    /* Exemplo de Map */
    map<string, float> preco;

    preco["arroz"] = 3.5;
    preco["feijao"] = 6.5;
    preco["frango"] = 15;

    for(auto& [produto,valor]: preco) {
        cout << produto << "-> " << valor << endl;
    }

}
