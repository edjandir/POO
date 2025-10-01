#include <iostream>
#include <locale>
#include <Pessoa.h>
#include <Aluno.h>
#include <Medico.h>
#include <Consulta.h>

using namespace std;

/*

Crie duas classes:
- Pessoa: string nome, string e-mail, int idade. Fa�a construtor sem e com par�metros, get e set e uma fun��o mostra para mostrar seus dados;
- Aluno: classe derivada de Pessoa. Essa classe acrescenta os seguintes atributos: string matricula, string curso. Implemente construtor sem
e com par�metros e uma fun��o para mostrar seus dados.
-Programa: crie dois alunos e mostre seus dados na tela.

-Crie a classe Medico derivada de pessoa com os atributos crm, especialidade , ambos do tipo string.
-instanciar a classe na fun��o main e mostrar as informa��es

-Crie a classe Consulta. Os atributos s�o: paciente (Pessoa), medico (Medico), data (string).
Construtor com par�metros e a fun��o mostra(). Na fun��o mostra, mostrar:
-Data, nome do paciente, nome do m�dico e a especialidade.

-Crie a classe contato com os seguintes atributos:
email, celular, logradouro, cidade, uf, todos do tipo string.
Modifique a classe Pessoa para associar o endere�o.
Na fun��o main() criar um endere�o e passar para a pessoa.


*/



int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Aluno a("Jos�", "jose@email.com", 48, "Sistemas embarcados", "123456");
    a.mostra();
    cout << endl << "=================================" << endl;
    Medico m("Manuel", "manuel@email.com", 50, "SC456", "Ortopedista");
    m.mostra();

    Consulta c(&a, &m, "01/10/2025");
    c.mostra();
    return 0;
}
