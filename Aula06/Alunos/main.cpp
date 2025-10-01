#include <iostream>
#include <locale>
#include <Pessoa.h>

using namespace std;

/*

Crie duas classes:
- Pessoa: string nome, string e-mail, int idade. Fa�a construtor sem e com par�metros, get e set e uma fun��o mostra para mostrar seus dados;
- Aluno: classe derivada de Pessoa. Essa classe acrescenta os seguintes atributos: string matricula, string curso. Implemente construtor sem
e com par�metros e uma fun��o para mostrar seus dados.
-Programa: crie dois alunos e mostre seus dados na tela.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Pessoa p("Jos�", "jose@email.com", 48);
    p.mostra();
    return 0;
}
