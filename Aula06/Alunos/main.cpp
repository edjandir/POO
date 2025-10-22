#include <iostream>
#include <locale>
#include <Pessoa.h>
#include <Aluno.h>
#include <Medico.h>
#include <Consulta.h>
#include <vector>

using namespace std;

/*

Crie duas classes:
- Pessoa: string nome, string e-mail, int idade. Faça construtor sem e com parâmetros, get e set e uma função mostra para mostrar seus dados;
- Aluno: classe derivada de Pessoa. Essa classe acrescenta os seguintes atributos: string matricula, string curso. Implemente construtor sem
e com parâmetros e uma função para mostrar seus dados.
-Programa: crie dois alunos e mostre seus dados na tela.

-Crie a classe Medico derivada de pessoa com os atributos crm, especialidade , ambos do tipo string.
-instanciar a classe na função main e mostrar as informações

-Crie a classe Consulta. Os atributos são: paciente (Pessoa), medico (Medico), data (string).
Construtor com parâmetros e a função mostra(). Na função mostra, mostrar:
-Data, nome do paciente, nome do médico e a especialidade.

-Crie a classe contato com os seguintes atributos:
email, celular, logradouro, cidade, uf, todos do tipo string.
Modifique a classe Pessoa para associar o endereço.
Na função main() criar um endereço e passar para a pessoa.


*/



int main()
{
    vector lista
    setlocale(LC_ALL, "Portuguese_Brazil");
    Aluno a("José", "jose@email.com", 48, "Sistemas embarcados", "123456");
    a.mostra();
    cout << endl << "=================================" << endl;
    Medico m("Manuel", "manuel@email.com", 50, "SC456", "Ortopedista");
    m.mostra();

    Consulta c(&a, &m, "01/10/2025");
    c.mostra();


    Cliente c1("Jose", "123..", "(48)98888",
                "jose@email.com");

    Produto p1(1, "Banana", 5);
    Produto p2(1, "Laranja", 3);

    PedidoItem item1(&p1, 3, 10);
    PedidoItem item2(&p2, 4, 15);

    Pedido pedido(c1, "08/10/2025");
    pedido.inclui_item(item1);
    pedido.inclui_item(item2);











    return 0;
}
