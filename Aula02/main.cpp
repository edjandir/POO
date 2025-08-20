#include <iostream>
#include <locale>

using namespace std;

void imprime_array(int[], int);
float calcula_media(int[], int);
void maior_menor(int[], int);

int main()
{
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

    //imprime_array(nums, tamanho);
    //cout << "Média do array {20,5,6,9,8,16,30,3,7,12}: " << calcula_media(nums, tamanho);
    maior_menor(nums, tamanho);
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
