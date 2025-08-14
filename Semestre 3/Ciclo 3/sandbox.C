#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINHA 1024
#define MAX_AMOSTRAS 1000
#define MAX_FEATURES 10

typedef struct
{
    double features[MAX_FEATURES];
    int classe;
} Amostra;

typedef struct
{
    int TP, FP, TN, FN;
} Confusao;

Amostra dados[MAX_AMOSTRAS];
int n_amostras = 0, n_features = 0;

// Função para ler dados do CSV
void ler_csv(const char *arquivo)
{
    FILE *fp = fopen(arquivo, "r");
    if (!fp)
    {
        perror("Erro ao abrir CSV");
        exit(1);
    }

    char linha[MAX_LINHA];
    while (fgets(linha, MAX_LINHA, fp))
    {
        char *token;
        char *contexto;
        token = strtok_s(linha, ",", &contexto);
        int f = 0;

        while (token && f < MAX_FEATURES)
        {
            dados[n_amostras].features[f++] = atof(token);
            token = strtok_s(NULL, ",", &contexto);
        }

        if (token != NULL)
            dados[n_amostras].classe = atoi(token); // última coluna = classe

        n_amostras++;
        n_features = f;
    }

    fclose(fp);
}

// Embaralha o vetor de dados
void embaralhar()
{
    for (int i = n_amostras - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        Amostra temp = dados[i];
        dados[i] = dados[j];
        dados[j] = temp;
    }
}

// Classifica usando uma feature e limiar
int classificar(Amostra a, int indice_feature, double limiar)
{
    return (a.features[indice_feature] > limiar) ? 1 : 0;
}

// Calcula a matriz de confusão
Confusao avaliar(Amostra *vetor, int n, int indice_feature, double limiar)
{
    Confusao c = {0, 0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        int prev = classificar(vetor[i], indice_feature, limiar);
        int real = vetor[i].classe;
        if (prev == 1 && real == 1)
            c.TP++;
        else if (prev == 1 && real == 0)
            c.FP++;
        else if (prev == 0 && real == 0)
            c.TN++;
        else if (prev == 0 && real == 1)
            c.FN++;
    }
    return c;
}

// Exibe métricas
void imprimir_metricas(Confusao c)
{
    int total = c.TP + c.FP + c.TN + c.FN;
    double acc = (double)(c.TP + c.TN) / total;
    double err = 1 - acc;
    double pre = (c.TP + c.FP) ? (double)c.TP / (c.TP + c.FP) : 0;
    double rec = (c.TP + c.FN) ? (double)c.TP / (c.TP + c.FN) : 0;
    double f1 = (pre + rec) ? 2 * pre * rec / (pre + rec) : 0;

    printf("TP: %d, FP: %d, TN: %d, FN: %d\n", c.TP, c.FP, c.TN, c.FN);
    printf("Acc: %.2f\n", acc);
    printf("Err: %.2f\n", err);
    printf("Precision: %.2f\n", pre);
    printf("Recall: %.2f\n", rec);
    printf("F1 Score: %.2f\n", f1);
}

int main()
{
    srand((unsigned)time(NULL));
    ler_csv("dados.csv");
    embaralhar();

    int split = n_amostras * 0.8;
    int feature_escolhida = 0;     // índice da feature que você quer usar (ex: 0, 1, 2...)
    double limiar_escolhido = 2.5; // valor do limiar para classificar

    printf("Treinamento (80%%):\n");
    Confusao treino = avaliar(dados, split, feature_escolhida, limiar_escolhido);
    imprimir_metricas(treino);

    printf("\nValidação (20%%):\n");
    Confusao valid = avaliar(dados + split, n_amostras - split, feature_escolhida, limiar_escolhido);
    imprimir_metricas(valid);

    return 0;
}