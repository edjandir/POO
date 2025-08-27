#include <iostream>
#include <locale>
#include "exercicios.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
/*
    terreno meu_terreno;
    meu_terreno.comprimento = {30, 50};
    meu_terreno.largura = {12, 30};

    cout << "\nMedida do terreno (metros): "
        << "Comprimento-" << meu_terreno.comprimento.metro << endl
        << "Largura-" << meu_terreno.largura.metro << endl << endl;

    //dia_hoje();

    data amanha = {28, 8, 2025};
    cout << amanha.dia << "/" << amanha.mes << "/"
        << amanha.ano << endl;


*/
    //4. Escreva um programa em C++ criando uma estrutura com
    //membros hora, minuto e segundo,
    //e que permita entrar com valores de tempo t e t2 e efetuar a soma t1 + t2.
    tempo t1 = {4, 40, 32};
    tempo t2 = {3, 50, 37};
    tempo soma = soma_tempo(t1, t2);
    cout << soma.horas << ":" << soma.minutos << ":" << soma.segundos << endl;

    return 0;
}
