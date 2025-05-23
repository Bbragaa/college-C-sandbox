#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome [30];
    int idade;
    int altura;
};

int main () {
    struct Pessoa artur;
    strcpy(artur.nome, "Artur");
    artur.idade = 22;
    artur.altura = 183;

    printf("Nome: %s\n", artur.nome);
    printf("Idade: %d\n", artur.idade);
    printf("Altura: %d cm\n", artur.altura);
    return 0;
};