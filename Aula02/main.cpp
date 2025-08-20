#include <iostream>
#include <locale>
#include <string>

using namespace std;

typedef struct {
    string matricula;
    string nome;
    string curso;
    int semestre;
} Aluno ;

void imprime_array(int[], int);
float calcula_media(int[], int);
void maior_menor(int[], int);
void inverter_array(int[], int);
void busca(Aluno[], int, string);



int main()
{
    Aluno a[3];
    a[0].matricula = "1234";
    a[0].nome = "José";
    a[0].curso = "Embarcados";
    a[0].semestre = 2;

    a[1].matricula = "567";
    a[1].nome = "Ramon";
    a[1].curso = "Embarcados";
    a[1].semestre = 4;

    a[2].matricula = "890";
    a[2].nome = "Arthur";
    a[2].curso = "Embarcados";
    a[2].semestre = 3;


    busca(a, 3, "Jos");

    setlocale(LC_ALL, "Portuguese_Brazil");
    int nums[] = {20,5,6,9,8,16,30,3,7,12};
    const int tamanho = sizeof(nums) / sizeof(nums[0]);

    //Exercícios
    //1-Crie uma função que define um array de 10 inteiros, inicialize
    //com valores arbitrários e imprima todos os elementos.
    //você tem duas opções: pode criar o array aqui mesmo na função
    //main e aproveitar para os exercícios seguintes ou criar
    //direto dentro da função

    //2-A função deve retornar a média dos elementos de um array
    //3-Encontrar o maior e menor valor em um array
    //4-Inverter um array
    //5-mostrar o tamanho de uma string
    //6-concatenar duas strings
    //7-comparar duas strings
    //8-contar o número de vogais em uma string
    //9-transformar uma string em maiúscula
    //10-Procurar um caractere em uma string


    //imprime_array(nums, tamanho);
    //cout << "Média do array {20,5,6,9,8,16,30,3,7,12}: " << calcula_media(nums, tamanho);
    //maior_menor(nums, tamanho);
    cout << "{20,5,6,9,8,16,30,3,7,12} invertido: {";
    inverter_array(nums, tamanho);
    for(int i=0; i < tamanho; i++) {
        cout << nums[i];
        if (i == tamanho-1) {
            cout << "}";
        } else {
            cout << ",";
        }
    }

    string texto = "IFSC";
    cout << texto[0];

    return 0;
}

//exercício 1
void imprime_array(int nums[], int tam) {
    for(int i=0; i < tam; i++) {
        cout << nums[i] << endl;
    }
}

//exercício 2
float calcula_media(int nums[], int len) {
    int soma = 0;
    for(int i=0; i < len; i++) {
        soma += nums[i];
    }
    return (soma/len);
}

//exercício 3
void maior_menor(int nums[], int len){
    int maior = nums[0];
    int menor = nums[0];

    for(int i=1; i<len; i++) {
        if (nums[i] > maior) {
            maior = nums[i];
        } else if (nums[i] < menor) {
            menor = nums[i];
        }
    }

    cout << "Maior: " << maior << endl << "Menor: " << menor;
}

//exercício 4
void inverter_array(int nums[], int n) {
    int temp;
    int j = n - 1;
    int i = 0;

    while (i < j) {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

void busca(Aluno alunos[], int len, string texto) {
    for(int i=0; i <len; i++) {
        if (alunos[i].curso.find(texto) != string::npos) {
            cout << alunos[i].matricula << " , " << alunos[i].nome << " , " << alunos[i].curso << " , " << alunos[i].semestre;
        } else if (alunos[i].nome.find(texto) != string::npos) {
            cout << alunos[i].matricula << " , " << alunos[i].nome << " , " << alunos[i].curso << " , " << alunos[i].semestre;
        }
    }
}
