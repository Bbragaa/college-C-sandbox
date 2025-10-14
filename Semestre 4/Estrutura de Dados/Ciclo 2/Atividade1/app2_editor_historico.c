#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TXT_MAX 256

typedef struct Estado
{
    char texto[TXT_MAX];
    struct Estado *anterior;
    struct Estado *proximo;
} Estado;

typedef struct
{
    Estado *atual;
} Historico;

static Estado *criar_estado(const char *t)
{
    Estado *e = (Estado *)malloc(sizeof(Estado));
    if (e == NULL)
    {
        perror("malloc");
        exit(1);
    }
    strncpy((*e).texto, t, TXT_MAX - 1);
    (*e).texto[TXT_MAX - 1] = '\0';
    (*e).anterior = NULL;
    (*e).proximo = NULL;
    return e;
}

// novo estado invalida redo
void registrar_estado(Historico *h, const char *t)
{
    Estado *e = criar_estado(t);

    if ((*h).atual != NULL)
    {
        Estado *q = (*(*h).atual).proximo;
        while (q != NULL)
        {
            Estado *nx = (*q).proximo;
            free(q);
            q = nx;
        }
        (*(*h).atual).proximo = e;
        (*e).anterior = (*h).atual;
    }

    (*h).atual = e;
}

int desfazer(Historico *h)
{
    if ((*h).atual != NULL)
    {
        if ((*(*h).atual).anterior != NULL)
        {
            (*h).atual = (*(*h).atual).anterior;
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

int refazer(Historico *h)
{
    if ((*h).atual != NULL)
    {
        if ((*(*h).atual).proximo != NULL)
        {
            (*h).atual = (*(*h).atual).proximo;
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

static void liberar(Historico *h)
{
    if ((*h).atual != NULL)
    {
        while ((*(*h).atual).anterior != NULL)
        {
            (*h).atual = (*(*h).atual).anterior;
        }
    }
    Estado *p = (*h).atual;
    while (p != NULL)
    {
        Estado *nx = (*p).proximo;
        free(p);
        p = nx;
    }
    (*h).atual = NULL;
}

int main(void)
{
    Historico h;
    h.atual = NULL;

    registrar_estado(&h, "Ola");
    registrar_estado(&h, "Ola, mundo");
    registrar_estado(&h, "Ola, mundo!!!");
    printf("atual: %s\n", (*h.atual).texto);

    if (desfazer(&h) == 1)
    {
        printf("undo: %s\n", (*h.atual).texto);
    }
    if (desfazer(&h) == 1)
    {
        printf("undo: %s\n", (*h.atual).texto);
    }
    if (refazer(&h) == 1)
    {
        printf("redo: %s\n", (*h.atual).texto);
    }

    registrar_estado(&h, "Novo texto");
    printf("novo: %s\n", (*h.atual).texto);

    liberar(&h);
    return 0;
}
