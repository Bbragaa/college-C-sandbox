#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int tamanho;
    float media = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // aloca memória para o vetor
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL)
    {
        perror("Erro na alocação");
        exit(EXIT_FAILURE);
    }

    // preenche o vetor
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        media += vetor[i];
    }

    // calcula e mostra a média
    media /= tamanho;
    printf("A média dos números é: %.2f\n", media);

    // libera memória
    free(vetor);
    vetor = NULL;

    return 0;
}
