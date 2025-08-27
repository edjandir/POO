#ifndef EXERCICIOS_H_INCLUDED
#define EXERCICIOS_H_INCLUDED



#endif // EXERCICIOS_H_INCLUDED

#include <iostream>
using namespace std;

struct data {
    int dia;
    int mes;
    int ano;
};

struct medida {
    float metro;
    float centimetro;
};

struct terreno {
    medida comprimento;
    medida largura;
};

struct tempo {
    int horas;
    int minutos;
    int segundos;
};

void dia_hoje();
tempo soma_tempo(tempo, tempo);

void dia_hoje() {
    data hoje;

    cout << "Hoje é qual dia do mês: ";
    cin >> hoje.dia;

    cout << "Estamos em qual mês: ";
    cin >> hoje.mes;

    cout << "Estamos em qual ano: ";
    cin >> hoje.ano;

    cout << "\nData de hoje informada: " << hoje.dia <<
        "/" << hoje.mes << "/" << hoje.ano << endl << endl;
}

tempo soma_tempo(tempo t1, tempo t2) {
    tempo result;
    result.horas = t1.horas + t2.horas;
    result.minutos = t1.minutos + t2.minutos;
    result.segundos = t1.segundos + t2.segundos;

    if (result.segundos >= 60) {
        result.minutos += 1;
        result.segundos = result.segundos - 60;
    }

    if (result.minutos >= 60) {
        result.horas += 1;
        result.minutos = result.minutos - 60;
    }

    return result;

}

