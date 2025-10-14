#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int valor;
    struct Node *anterior;
    struct Node *proximo;
} Node;

typedef struct
{
    Node *inicio;
    Node *fim;
    size_t tamanho;
} Lista;

static Node *criar_no(int valor)
{
    Node *n = (Node *)malloc(sizeof(Node));
    if (n == NULL)
    {
        perror("malloc");
        exit(1);
    }
    (*n).valor = valor;
    (*n).anterior = NULL;
    (*n).proximo = NULL;
    return n;
}

void inserir_fim(Lista *L, int valor)
{
    Node *n = criar_no(valor);

    if ((*L).fim == NULL)
    {
        (*L).inicio = n;
        (*L).fim = n;
    }
    else
    {
        (*n).anterior = (*L).fim;
        (*(*L).fim).proximo = n;
        (*L).fim = n;
    }

    (*L).tamanho = (*L).tamanho + 1;
}

// usar ponteiro fim permite remoção O(1)
int remover_ultimo(Lista *L, int *out)
{
    if ((*L).fim == NULL)
    {
        return 0;
    }

    Node *rm = (*L).fim;

    if (out != NULL)
    {
        *out = (*rm).valor;
    }

    (*L).fim = (*rm).anterior;

    if ((*L).fim != NULL)
    {
        (*(*L).fim).proximo = NULL;
    }
    else
    {
        (*L).inicio = NULL;
    }

    free(rm);
    (*L).tamanho = (*L).tamanho - 1;
    return 1;
}

static void liberar(Lista *L)
{
    Node *p = (*L).inicio;
    while (p != NULL)
    {
        Node *nx = (*p).proximo;
        free(p);
        p = nx;
    }
    (*L).inicio = NULL;
    (*L).fim = NULL;
    (*L).tamanho = 0;
}

int main(void)
{
    Lista L;
    L.inicio = NULL;
    L.fim = NULL;
    L.tamanho = 0;

    inserir_fim(&L, 5);
    inserir_fim(&L, 15);
    inserir_fim(&L, 25);

    int x;
    int ok = remover_ultimo(&L, &x);
    while (ok == 1)
    {
        printf("removido: %d\n", x);
        ok = remover_ultimo(&L, &x);
    }
    printf("lista vazia: ");
    if (L.inicio == NULL)
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }
    liberar(&L);
    return 0;
}
