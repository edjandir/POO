#include <iostream>
#include <fstream>
#include <string.h>

class Pessoa {
public:
    char nome[50];
    int idade;

    Pessoa() {}
    Pessoa(const std::string& n, int i) {
        strncpy(nome, n.c_str(), sizeof(nome));
        nome[sizeof(nome) - 1] = '\0'; // Garantir terminação
        idade = i;
    }

    void mostrar() const {
        std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;
    }
};


void salvarPessoa(const Pessoa& p, const std::string& nomeArquivo) {
    std::ofstream arquivo(nomeArquivo, std::ios::binary);
    if (!arquivo) {
        std::cerr << "Erro ao abrir o arquivo para escrita." << std::endl;
        return;
    }
    arquivo.write(reinterpret_cast<const char*>(&p), sizeof(Pessoa));
    arquivo.close();
}

Pessoa carregarPessoa(const std::string& nomeArquivo) {
    Pessoa p;
    std::ifstream arquivo(nomeArquivo, std::ios::binary);
    if (!arquivo) {
        std::cerr << "Erro ao abrir o arquivo para leitura." << std::endl;
        return p;
    }
    arquivo.read(reinterpret_cast<char*>(&p), sizeof(Pessoa));
    arquivo.close();
    return p;
}

int main()
{
/*
    Pessoa pessoaOriginal("João da Silva", 30);
    salvarPessoa(pessoaOriginal, "pessoa.dat");
*/
    Pessoa pessoaCarregada = carregarPessoa("pessoa.dat");
    pessoaCarregada.mostrar();

    return 0;

}


