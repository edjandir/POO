#include <iostream>

#include <Pessoa.h>
#include <locale.h>

using namespace std;

void mostra_pessoa(Pessoa);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Pessoa p1;
    Pessoa p2("José Carlos", "01/12/1985");
    Pessoa p3("Geovana", "18/12/2004");

////    system("PAUSE");


    p1.Setnome("Arthur");
    p1.Setdata_nascimento("10/10/2005");

    p1.mostra();
    p2.mostra();
    p3.mostra();

    return 0;
}

void mostra_pessoa(Pessoa p) {
    cout << "Nome: " << p.Getnome() << "\nData de nascimento: "
        << p.Getdata_nascimento() << endl;
}
