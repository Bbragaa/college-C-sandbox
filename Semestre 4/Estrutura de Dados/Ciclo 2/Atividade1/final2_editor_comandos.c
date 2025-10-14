#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CMD_MAX 80

typedef struct Cmd
{
    char cmd[CMD_MAX];
    struct Cmd *anterior;
    struct Cmd *proximo;
} Cmd;

typedef struct
{
    Cmd *atual;
} ListaCmd;

static Cmd *criar_cmd(const char *c)
{
    Cmd *n = (Cmd *)malloc(sizeof(Cmd));
    if (n == NULL)
    {
        perror("malloc");
        exit(1);
    }
    strncpy((*n).cmd, c, CMD_MAX - 1);
    (*n).cmd[CMD_MAX - 1] = '\0';
    (*n).anterior = NULL;
    (*n).proximo = NULL;
    return n;
}

// novo comando corta redo
void adicionar_cmd(ListaCmd *L, const char *c)
{
    Cmd *n = criar_cmd(c);

    if ((*L).atual != NULL)
    {
        Cmd *q = (*(*L).atual).proximo;
        while (q != NULL)
        {
            Cmd *nx = (*q).proximo;
            free(q);
            q = nx;
        }
        (*(*L).atual).proximo = n;
        (*n).anterior = (*L).atual;
    }

    (*L).atual = n;
}

int desfazer_cmd(ListaCmd *L)
{
    if ((*L).atual != NULL)
    {
        if ((*(*L).atual).anterior != NULL)
        {
            (*L).atual = (*(*L).atual).anterior;
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

int refazer_cmd(ListaCmd *L)
{
    if ((*L).atual != NULL)
    {
        if ((*(*L).atual).proximo != NULL)
        {
            (*L).atual = (*(*L).atual).proximo;
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

static void liberar(ListaCmd *L)
{
    if ((*L).atual != NULL)
    {
        while ((*(*L).atual).anterior != NULL)
        {
            (*L).atual = (*(*L).atual).anterior;
        }
    }
    Cmd *p = (*L).atual;
    while (p != NULL)
    {
        Cmd *nx = (*p).proximo;
        free(p);
        p = nx;
    }
    (*L).atual = NULL;
}

int main(void)
{
    ListaCmd L;
    L.atual = NULL;

    adicionar_cmd(&L, "digitar: Ola");
    adicionar_cmd(&L, "digitar: Mundo");
    adicionar_cmd(&L, "apagar: !");

    if (L.atual != NULL)
    {
        printf("atual: %s\n", (*L.atual).cmd);
    }

    if (desfazer_cmd(&L) == 1)
    {
        printf("undo -> %s\n", (*L.atual).cmd);
    }
    if (desfazer_cmd(&L) == 1)
    {
        printf("undo -> %s\n", (*L.atual).cmd);
    }
    if (refazer_cmd(&L) == 1)
    {
        printf("redo -> %s\n", (*L.atual).cmd);
    }

    adicionar_cmd(&L, "colar: :)");
    if (L.atual != NULL)
    {
        printf("novo -> %s\n", (*L.atual).cmd);
    }

    liberar(&L);
    return 0;
}
