#include <stdio.h>
#include <string.h>

#define MAX_CASOS 100
#define MAX_DOENCAS 3
#define MAX_ESTADOS 4
#define MAX_CIDADES 3

// Enum de doenças
typedef enum {
    COVID19,
    DENGUE,
    ZIKA
} Doenca;

// Nomes das doenças
const char* nomeDoenca[MAX_DOENCAS] = { "COVID-19", "Dengue", "Zika" };

// Struct para um caso registrado
typedef struct {
    int doenca;
    int estado;
    int cidade;
} Caso;

// Estados e cidades fixos
const char* estados[MAX_ESTADOS] = { "Goiás", "São Paulo", "Rio de Janeiro", "Paraná" };
const char* cidades[MAX_ESTADOS][MAX_CIDADES] = {
    { "Goiânia", "Anápolis", "Aparecida de Goiânia" },
    { "São Paulo", "Campinas", "Santos" },
    { "Rio de Janeiro", "Niterói", "Duque de Caxias" },
    { "Curitiba", "Londrina", "Maringá" }
};

// Base de dados dos casos
Caso casos[MAX_CASOS];
int totalCasos = 0;

// Funções auxiliares
void mostrarDoencas() {
    for (int i = 0; i < MAX_DOENCAS; i++) {
        printf("[%d] %s\n", i + 1, nomeDoenca[i]);
    }
}

void mostrarEstados() {
    for (int i = 0; i < MAX_ESTADOS; i++) {
        printf("[%d] %s\n", i + 1, estados[i]);
    }
}

void mostrarCidades(int estado) {
    for (int i = 0; i < MAX_CIDADES; i++) {
        printf("[%d] %s\n", i + 1, cidades[estado][i]);
    }
}

// Inserir novo caso
void inserirCaso() {
    if (totalCasos >= MAX_CASOS) {
        printf("Limite de casos atingido.\n");
        return;
    }

    int doenca, estado, cidade;

    printf("\nSelecione a doença:\n");
    mostrarDoencas();
    scanf("%d", &doenca);
    doenca--; // Ajuste de índice

    if (doenca < 0 || doenca >= MAX_DOENCAS) {
        printf("Doença inválida.\n");
        return;
    }

    printf("\nSelecione o estado:\n");
    mostrarEstados();
    scanf("%d", &estado);
    estado--; // Ajuste de índice

    if (estado < 0 || estado >= MAX_ESTADOS) {
        printf("Estado inválido.\n");
        return;
    }

    printf("\nSelecione a cidade:\n");
    mostrarCidades(estado);
    scanf("%d", &cidade);
    cidade--; // Ajuste de índice

    if (cidade < 0 || cidade >= MAX_CIDADES) {
        printf("Cidade inválida.\n");
        return;
    }

    casos[totalCasos].doenca = doenca;
    casos[totalCasos].estado = estado;
    casos[totalCasos].cidade = cidade;
    totalCasos++;

    printf("Caso registrado com sucesso!\n");
}

// Consultar casos
void consultarCasos() {
    int doenca, estado, cidade, contador = 0;

    printf("\nSelecione a doença para consultar:\n");
    mostrarDoencas();
    scanf("%d", &doenca);
    doenca--;

    if (doenca < 0 || doenca >= MAX_DOENCAS) {
        printf("Doença inválida.\n");
        return;
    }

    printf("\nSelecione o estado:\n");
    mostrarEstados();
    scanf("%d", &estado);
    estado--;

    if (estado < 0 || estado >= MAX_ESTADOS) {
        printf("Estado inválido.\n");
        return;
    }

    printf("\nSelecione a cidade:\n");
    mostrarCidades(estado);
    scanf("%d", &cidade);
    cidade--;

    if (cidade < 0 || cidade >= MAX_CIDADES) {
        printf("Cidade inválida.\n");
        return;
    }

    for (int i = 0; i < totalCasos; i++) {
        if (casos[i].doenca == doenca &&
            casos[i].estado == estado &&
            casos[i].cidade == cidade) {
            contador++;
        }
    }

    printf("Número de casos de %s em %s, %s: %d\n",
           nomeDoenca[doenca],
           cidades[estado][cidade],
           estados[estado],
           contador);
}

// Menu principal
int main() {
    int opcao;

    do {
        printf("\n==== Sistema de Mapeamento - Daery ====\n");
        printf("1. Inserir novo caso\n");
        printf("2. Consultar casos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirCaso();
                break;
            case 2:
                consultarCasos();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 3);

    return 0;
}
