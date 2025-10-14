#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define URL_MAX 128

typedef struct Pagina
{
    char url[URL_MAX];
    struct Pagina *anterior;
    struct Pagina *proximo;
} Pagina;

typedef struct
{
    Pagina *atual;
} Navegador;

static Pagina *criar_pagina(const char *url)
{
    Pagina *p = (Pagina *)malloc(sizeof(Pagina));
    if (p == NULL)
    {
        perror("malloc");
        exit(1);
    }
    strncpy((*p).url, url, URL_MAX - 1);
    (*p).url[URL_MAX - 1] = '\0';
    (*p).anterior = NULL;
    (*p).proximo = NULL;
    return p;
}

// navegar para novo endereço apaga o forward
void navegar_para(Navegador *n, const char *url)
{
    Pagina *nova = criar_pagina(url);

    if ((*n).atual != NULL)
    {
        Pagina *q = (*(*n).atual).proximo;
        while (q != NULL)
        {
            Pagina *nx = (*q).proximo;
            free(q);
            q = nx;
        }
        (*(*n).atual).proximo = nova;
        (*nova).anterior = (*n).atual;
    }

    (*n).atual = nova;
}

int voltar(Navegador *n)
{
    if ((*n).atual != NULL)
    {
        if ((*(*n).atual).anterior != NULL)
        {
            (*n).atual = (*(*n).atual).anterior;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int avancar(Navegador *n)
{
    if ((*n).atual != NULL)
    {
        if ((*(*n).atual).proximo != NULL)
        {
            (*n).atual = (*(*n).atual).proximo;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

static void liberar(Navegador *n)
{
    if ((*n).atual != NULL)
    {
        while ((*(*n).atual).anterior != NULL)
        {
            (*n).atual = (*(*n).atual).anterior;
        }
    }
    Pagina *p = (*n).atual;
    while (p != NULL)
    {
        Pagina *nx = (*p).proximo;
        free(p);
        p = nx;
    }
    (*n).atual = NULL;
}

int main(void)
{
    Navegador n;
    n.atual = NULL;

    navegar_para(&n, "a.com");
    navegar_para(&n, "b.com");
    navegar_para(&n, "c.com");
    printf("atual: %s\n", (*n.atual).url);

    if (voltar(&n) == 1)
    {
        printf("voltar -> %s\n", (*n.atual).url);
    }
    if (voltar(&n) == 1)
    {
        printf("voltar -> %s\n", (*n.atual).url);
    }
    if (avancar(&n) == 1)
    {
        printf("avancar -> %s\n", (*n.atual).url);
    }
    navegar_para(&n, "d.com");
    printf("novo -> %s\n", (*n.atual).url);

    liberar(&n);
    return 0;
}
