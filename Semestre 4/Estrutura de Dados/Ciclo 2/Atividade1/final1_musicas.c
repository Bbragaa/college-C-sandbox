#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_MAX 64

typedef struct Musica
{
    char nome[NOME_MAX];
    struct Musica *anterior;
    struct Musica *proximo;
} Musica;

typedef struct
{
    Musica *inicio;
    Musica *fim;
    Musica *atual;
    size_t tamanho;
} Player;

static Musica *criar_musica(const char *nome)
{
    Musica *m = (Musica *)malloc(sizeof(Musica));
    if (m == NULL)
    {
        perror("malloc");
        exit(1);
    }
    strncpy((*m).nome, nome, NOME_MAX - 1);
    (*m).nome[NOME_MAX - 1] = '\0';
    (*m).anterior = NULL;
    (*m).proximo = NULL;
    return m;
}

void adicionar_fim(Player *p, const char *nome)
{
    Musica *m = criar_musica(nome);

    if ((*p).fim == NULL)
    {
        (*p).inicio = m;
        (*p).fim = m;
    }
    else
    {
        (*m).anterior = (*p).fim;
        (*(*p).fim).proximo = m;
        (*p).fim = m;
    }

    if ((*p).atual == NULL)
    {
        (*p).atual = m;
    }

    (*p).tamanho = (*p).tamanho + 1;
}

const char *tocar_atual(Player *p)
{
    if ((*p).atual != NULL)
    {
        return (*(*p).atual).nome;
    }
    else
    {
        return "(silencio)";
    }
}

void tocar_proxima(Player *p)
{
    if ((*p).atual != NULL)
    {
        if ((*(*p).atual).proximo != NULL)
        {
            (*p).atual = (*(*p).atual).proximo;
        }
    }
}

void tocar_anterior(Player *p)
{
    if ((*p).atual != NULL)
    {
        if ((*(*p).atual).anterior != NULL)
        {
            (*p).atual = (*(*p).atual).anterior;
        }
    }
}

// ajustar início/fim e escolher a próxima música válida
int remover_atual(Player *p)
{
    if ((*p).atual == NULL)
    {
        return 0;
    }

    Musica *rm = (*p).atual;
    Musica *proxima = NULL;

    if ((*rm).proximo != NULL)
    {
        proxima = (*rm).proximo;
    }
    else
    {
        if ((*rm).anterior != NULL)
        {
            proxima = (*rm).anterior;
        }
        else
        {
            proxima = NULL;
        }
    }

    if ((*rm).anterior != NULL)
    {
        (*(*rm).anterior).proximo = (*rm).proximo;
    }
    else
    {
        (*p).inicio = (*rm).proximo;
    }

    if ((*rm).proximo != NULL)
    {
        (*(*rm).proximo).anterior = (*rm).anterior;
    }
    else
    {
        (*p).fim = (*rm).anterior;
    }

    free(rm);
    (*p).tamanho = (*p).tamanho - 1;
    (*p).atual = proxima;
    return 1;
}

static void liberar(Player *p)
{
    Musica *m = (*p).inicio;
    while (m != NULL)
    {
        Musica *nx = (*m).proximo;
        free(m);
        m = nx;
    }
    (*p).inicio = NULL;
    (*p).fim = NULL;
    (*p).atual = NULL;
    (*p).tamanho = 0;
}

int main(void)
{
    Player pl;
    pl.inicio = NULL;
    pl.fim = NULL;
    pl.atual = NULL;
    pl.tamanho = 0;

    adicionar_fim(&pl, "Alpha");
    adicionar_fim(&pl, "Beta");
    adicionar_fim(&pl, "Gamma");

    printf("tocando: %s\n", tocar_atual(&pl));
    tocar_proxima(&pl);
    printf("proxima: %s\n", tocar_atual(&pl));
    tocar_anterior(&pl);
    printf("anterior: %s\n", tocar_atual(&pl));
    remover_atual(&pl);
    printf("apos remover: %s\n", tocar_atual(&pl));

    liberar(&pl);
    return 0;
}
