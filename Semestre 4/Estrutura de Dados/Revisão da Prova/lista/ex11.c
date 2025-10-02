#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;

    printf("Insira o numero de elementos que voce deseja que o vetor tenha: \n");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Erro de alocacao de memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        ptr[i] = i;
    }

    printf("Insira o novo tamanho do vetor (deve ser maior que o anteior): \n");
    scanf("%d", &m);

    int *ptr_realloc = (int *)realloc(ptr, m * sizeof(int));
    if (ptr_realloc == NULL)
    {
        printf("Erro de realocacao de memoria\n");
        free(ptr);
        return 1;
    }
    else
    {
        ptr = ptr_realloc;
    }

    for (int i = n; i < m; i++)
    {
        ptr[i] = -1;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    free(ptr_realloc);

    return 0;
}