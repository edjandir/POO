#include "Conta.h"

void Conta::operator += (double valor) {
    saldo += valor;
}

void Conta::operator -= (double valor) {
    saldo -= valor;
}
