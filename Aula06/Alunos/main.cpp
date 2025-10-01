#include <iostream>
#include <locale>
#include <Pessoa.h>

using namespace std;

/*

Crie duas classes:
- Pessoa: string nome, string e-mail, int idade. Faça construtor sem e com parâmetros, get e set e uma função mostra para mostrar seus dados;
- Aluno: classe derivada de Pessoa. Essa classe acrescenta os seguintes atributos: string matricula, string curso. Implemente construtor sem
e com parâmetros e uma função para mostrar seus dados.
-Programa: crie dois alunos e mostre seus dados na tela.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Pessoa p("José", "jose@email.com", 48);
    p.mostra();
    return 0;
}
