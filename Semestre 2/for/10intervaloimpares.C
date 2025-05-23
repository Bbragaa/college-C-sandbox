#include <stdio.h>
#include <stdlib.h>

int main () {

//Declaração de variáveis
int n1, n2, result = 0;

//Pedindo ao user o intervalo de trabalho
printf ("porfavor, o primeiro numero de definicao de intervalo (o menor):");
scanf ("%d", &n1);

printf ("porfavor, o segundo numero de definicao de intervalo (o maior):");
scanf ("%d", &n2);

//Função de soma dos números ímpares 
for (int i = n1; i >= n1 && i <= n2; i ++ ) {
    if (i % 2 == 1) {
    result = result + i;
    } else {
    continue;
    }
}

printf ("A soma de todos os numeros impares entre %d e %d e igual a %d", n1, n2, result);

    getchar();
    return 0;
}