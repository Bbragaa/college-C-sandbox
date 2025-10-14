#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO 100
int lista[TAMANHO_MAXIMO];
int ultimo = -1;

void inicializa()
{
    ultimo = -1;
}

int insere_final(int valor)
{
    if (ultimo >= TAMANHO_MAXIMO - 1)
    {
        return 0;
    }
    ultimo++;
    lista[ultimo] = valor;
    return 1;
}

int remove_lista(int pos)
{
    if (pos < 0 || pos > ultimo)
    {
        return 0;
    }
    for (int i = pos; i < ultimo; i++)
    {
        lista[i] = lista[i + 1];
    }
    ultimo--;
    return 1;
}

int busca(int valor)
{
    for (int i = 0; i <= ultimo; i++)
    {
        if (lista[i] == valor)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int retorno_insere;

    inicializa();

    retorno_insere = insere_final(10);
    if (retorno_insere == 0)
    {
        printf("Erro ao inserir elemento\n");
    }
    else
    {
        printf("Elemento inserido com sucesso\n");
    }

    printf("%d\n", lista[0]);

    busca(10);

    remove_lista(0);
    printf("%d\n", ultimo);

    return 0;
}
