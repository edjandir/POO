#include <iostream>

#include <Gestor.h>
#include <Professor.h>
#include <Tecnico.h>
#include <Estudante.h>

#include <iostream>

using namespace std;

int main()
{
    Gestor g1, g2;
    Professor p1;
    Tecnico t1;

   /* Estudante e1;
    Funcionario f1;

    cout << "\n\nInforme dados do Funcionario 1:";
    f1.lerDados();
    cout << "\nDados do Funcionário 1:\n";
    f1.mostraDados();
*/


    cout << "\n\nInforme dados do Gestor 1: ";
    g1.lerDados();

    cout << "\n\nInforme dados do Gestor 2: ";
    g2.lerDados();

    cout << "\n\nInforme dados do Professor 1: ";
    p1.lerDados();

    cout << "\n\nInforme dados do Tecnico 1: ";
    t1.lerDados();

    cout << "\nDados do Gestor 1:";
    g1.mostraDados();

    cout << "\nDados do Gestor 2:";
    g2.mostraDados();

    cout << "\nDados do Professor 1:";
    p1.mostraDados();

    cout << "\nDados do Tecnico 1:";
    t1.mostraDados();

    cout << endl << endl;



    system("PAUSE");
    return 0;
}
