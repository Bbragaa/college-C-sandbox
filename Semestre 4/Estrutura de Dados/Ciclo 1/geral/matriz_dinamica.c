#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int **matriz;
    int linhas, colunas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    srand(time(NULL)); // inicializa números aleatórios

    // aloca memória para as linhas
    matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL)
    {
        perror("Erro na alocação");
        exit(EXIT_FAILURE);
    }

    // aloca memória para cada linha
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL)
        {
            perror("Erro na alocação");
            exit(EXIT_FAILURE);
        }
    }

    // preenche com números aleatórios
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // encontra maior valor de cada linha
    for (int i = 0; i < linhas; i++)
    {
        int maior = matriz[i][0];
        for (int j = 1; j < colunas; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
        printf("Maior valor da linha %d: %d\n", i + 1, maior);
    }

    // libera memória
    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;

    return 0;
}
