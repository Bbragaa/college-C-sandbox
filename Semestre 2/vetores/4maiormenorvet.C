#include <stdio.h>

int main() {
    int a[15];
    int i, maior, menor;

    // Receber os 15 valores do vetor
    for (i = 0; i < 15; i++) {
        printf("Digite o valor da posicao %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Inicializando o maior e menor como o primeiro valor do vetor
    maior = a[0];
    menor = a[0];

    // Encontrar o maior e o menor valor
    for (i = 1; i < 15; i++) {
        if (a[i] > maior) {
            maior = a[i];
        }
        if (a[i] < menor) {
            menor = a[i];
        }
    }

    // Exibir o maior e menor valor
    printf("\nO maior valor do vetor e: %d\n", maior);
    printf("O menor valor do vetor e: %d\n", menor);

    return 0;
}
