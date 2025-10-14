#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Insira o numero de elementos que voce deseja que o vetor tenha: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Erro de alocacao de memoria\n");
        return 1;
    }
    else
    {
        printf("Memoria alocada com sucesso\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Insira o valor do elemento %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Elemento %d multiplicado por dois: %d\n", i + 1, ptr[i] * 2);
    }

    free(ptr);
    return 0;
}