#include <iostream>
#include <Conta.h>
#include <locale.h>

using namespace std;

void mostra(Conta conta) {
    cout << "\nNome: " << conta.nome << "\tSaldo: " << conta.saldo;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Conta c("Amádio", 200000);
    c -= 1000;
    mostra(c);
    return 0;
}
