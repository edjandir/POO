#include <iostream>

using namespace std;

void cadastro_aluno();

int main()
{
    //Nome (string)
    //Curso (string)
    //Semestre (int)
    //N�mero de disciplinas (int)
    cadastro_aluno() ;
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
    cout << "Quantas disciplinas est� fazendo? ";
    cin >> num_disciplinas;

    cout << endl << endl;
    cout << "Aluno: " << nome << endl;
    cout << "Curso: " << curso << endl;
    cout << "Semestre: " << semestre << endl;
    cout << "N�mero de disciplinas: " << num_disciplinas << endl;

}
