#include <iostream>
#include <locale.h>

using namespace std;

void cadastro_aluno();
void multiplos_tres();
void multiplos_tres_v2();
void pares_entre_20_50();
double calcula_media(double, double, double);
string dia_semana(int);
string mes_ano(int);
int busca_numero_array(int[], int);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    //Nome (string)
    //Curso (string)
    //Semestre (int)
    //Número de disciplinas (int)
//    cadastro_aluno() ;
    //multiplos_tres_v2();

    int lista[] = {1, 2, 3, 4, 5};

    cout << calcula_media(5, 7, 8) << endl;
    cout << dia_semana(5) << endl;
    cout << mes_ano(7) << endl;
    cout << busca_numero_array(lista, 4);

// 1- crie uma função que receba três números (float) e retorne a média.

// 2- crie uma função que receba números de 1 a 7. Essa função deve retornar do dia da semana. Ex: Segunda-feira.
// (use IF ELSE)

//3 - crie uma função que receba um número entre 1 e 12. A função retorna o nome de mês: Ex: Janeiro.
// (use SWITCH CASE)

// 4- crie uma função que recebe um array e um número. A função vai procurar o número no array
//caso encontre retorna a posição do array. caso não encontre retorna -1

}

void multiplos_tres_v2() {
    cout << "Múltiplos de 3..." << endl;
    for(int i=3; i <= 100; i+=3) {
        cout << i << endl;
    }
}

void multiplos_tres() {
    cout << "Múltiplos de 3..." << endl;
    //repetição que começa de 1 e vai até 100
    for(int i=1; i <= 100; i++) {
        //verifica se o resto da divisão por 3 é 0. Se for é múltiplo
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }
}

void pares_entre_20_50() {
    cout << "Pares entre 20 e 50..." << endl;
    for( int i = 20; i <= 50; i+=2) {
        cout << i << endl;
    }
}



void cadastro_aluno() {
    string nome, curso;
    int semestre, num_disciplinas;

    cout << "Informe seu nome: ";
    getline(cin, nome);
    cout << "Informe seu curso: ";
    getline(cin, curso);
    cout << "Informe o semestre: ";
    cin >> semestre;
    cout << "Quantas disciplinas está fazendo? ";
    cin >> num_disciplinas;

    cout << endl << endl;
    cout << "Aluno: " << nome << endl;
    cout << "Curso: " << curso << endl;
    cout << "Semestre: " << semestre << endl;
    cout << "Número de disciplinas: " << num_disciplinas << endl;

}

double calcula_media(double n1,double n2, double n3) {
    return (n1 + n2 + n3) / 3;
}

string dia_semana(int dia) {
    string result;
    if (dia ==1) {
        result = "Domingo";
    } else if (dia ==2) {
        result = "Segunda-feira";
    } else if (dia ==3) {
        result = "Terçã-feira";
    } else if (dia ==4) {
        result = "Quarta-feira";
    } else if (dia ==5) {
        result = "Quinta-feira";
    } else if (dia ==6) {
        result = "Sexta-feira";
    } else if (dia ==7) {
        result = "Sábado";
    } else {
        result = "Dia não existe!";
    }
    return result;
}

string mes_ano(int mes) {
    string result;

    switch (mes) {
    case 1:
        result = "Janeiro";
        break;

    case 2:
        result = "Fevereiro";
        break;

    case 3:
        result = "Março";
        break;

    case 4:
        result = "Abril";
        break;

    case 5:
        result = "Maio";
        break;

    case 6:
        result = "Junho";
        break;

    case 7:
        result = "Julho";
        break;

    case 8:
        result = "Agosto";
        break;

    case 9:
        result = "Setembro";
        break;

    case 10:
        result = "Outubro";
        break;

    case 11:
        result = "Novembro";
        break;

    case 12:
        result = "Dezembro";
        break;

    default:
        result = "Mês não existe!";
        break;
    }

    return result;
}

int busca_numero_array(int lista[], int n) {
    int tamanho_array = sizeof(lista) / 2;
    int result = -1;
    for(int i=0; i < tamanho_array; i++) {
        if (lista[i] == n) {
            result = i;
        }
    }
    return result;
}
