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

// manter ponteiro fim evita percorrer toda a lista
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

static void imprimir(const Lista *L)
{
    Node *p = (*L).inicio;
    while (p != NULL)
    {
        printf("%d ", (*p).valor);
        p = (*p).proximo;
    }
    printf("\n");
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

    inserir_fim(&L, 10);
    inserir_fim(&L, 20);
    inserir_fim(&L, 30);
    imprimir(&L);
    liberar(&L);
    return 0;
}
