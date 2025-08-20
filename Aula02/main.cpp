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

    //Exerc�cios
    //1-Crie uma fun��o que define um array de 10 inteiros, inicialize
    //com valores arbitr�rios e imprima todos os elementos.
    //voc� tem duas op��es: pode criar o array aqui mesmo na fun��o
    //main e aproveitar para os exerc�cios seguintes ou criar
    //direto dentro da fun��o

    //2-A fun��o deve retornar a m�dia dos elementos de um array
    //3-Encontrar o maior e menor valor em um array
    //4-Inverter um array

    //imprime_array(nums, tamanho);
    //cout << "M�dia do array {20,5,6,9,8,16,30,3,7,12}: " << calcula_media(nums, tamanho);
    maior_menor(nums, tamanho);
    return 0;
}

//exerc�cio 1
void imprime_array(int nums[], int tam) {
    for(int i=0; i < tam; i++) {
        cout << nums[i] << endl;
    }
}

//exerc�cio 2
float calcula_media(int nums[], int len) {
    int soma = 0;
    for(int i=0; i < len; i++) {
        soma += nums[i];
    }
    return (soma/len);
}

//exerc�cio 3
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
