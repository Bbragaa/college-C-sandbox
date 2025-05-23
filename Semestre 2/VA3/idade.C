#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

struct Pessoa {
    char nome[30];
    int idade;
};

typedef struct Pessoa pessoa;

int main () {
    int i;
    int maiorIdade = 0;
    pessoa lista[5];

    for (i = 0;i < 5;i++){
        printf ("Qual o nome da pessoa %d?\n", i+1);
        fgets(lista[i].nome, 30, stdin);
        fflush(stdin);

        printf ("Qual a idade da pessoa %d?\n", i+1);
        scanf ("%d", &lista[i].idade);
        fflush(stdin);

        if (maiorIdade < lista[i].idade){
            maiorIdade = i;
        }

    }

    printf ("O nome da pessoa com maior idade e %s\n",lista[maiorIdade].nome);
  
    return 0;
}
