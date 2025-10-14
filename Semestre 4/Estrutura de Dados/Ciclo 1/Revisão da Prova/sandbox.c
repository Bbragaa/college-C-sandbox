#include <stdio.h>

int main()
{
    int tamanho;
    int v = 1;

    int i;
    float media;
    int total = 0;

    while (v != 0)
    {
        printf("Qual o tamanho do vetor? \n");
        scanf("%d", &tamanho);
        if (tamanho > 20 || tamanho < 0)
        {
            printf("Tamanho inválido, escolha um valor de no maximo 20\n");
        }
        else
        {
            v = 0;
        }
    }

    int numeros[10];
    // int numeros[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        printf("Qual o valor do numero na posicao %d \n", i + 1);
        scanf("%d", &numeros[i]);
        total += numeros[i];
    }

    media = total / (1.00 * tamanho);
    printf("Valores: \n");

    printf("[ ");

    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf(" ]\n");

    printf("A media do aluno foi %.2f", media);

    return 0;
}
