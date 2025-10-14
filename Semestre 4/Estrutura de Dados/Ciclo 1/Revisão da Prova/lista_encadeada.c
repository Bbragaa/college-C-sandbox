// Implementação de uma lista encadeada estática usando vetores
#include <stdio.h>
#include <stdlib.h>

int dados[100];    // Array para armazenar os valores da lista
int prox[100];     // Array que armazena os "próximos índices" (ligações entre os nós)
int primeiro = -1; // Índice do primeiro elemento da lista (-1 significa lista vazia)
int livre = 0;     // Índice da primeira posição livre no array (lista de espaços disponíveis)

// Inicializa a lista
void inicializa()
{
    primeiro = -1; // Nenhum elemento na lista

    // Encadeia todas as posições livres (lista de "espaços disponíveis")
    // Cada posição aponta para a próxima livre
    for (int i = 0; i < 99; i++)
    {
        prox[i] = i + 1;
    }
    prox[99] = -1; // Última posição livre aponta para -1 (fim da lista de livres)

    livre = 0; // Começa com a posição 0 como primeira livre
}

// Insere elemento no início da lista
// Retorna 1 se conseguiu inserir, ou 0 se a lista estiver cheia
int insere(int valor)
{
    if (livre == -1)
    {
        return 0; // Não há espaço livre → lista cheia
    }

    int novo = livre;      // Pega a posição livre
    livre = prox[livre];   // Atualiza "livre" para o próximo espaço disponível
    dados[novo] = valor;   // Armazena o valor na posição escolhida
    prox[novo] = primeiro; // Novo nó aponta para o antigo primeiro
    primeiro = novo;       // Atualiza "primeiro" para a nova inserção

    return 1;
}

// Remove o primeiro elemento da lista
// Retorna 1 se conseguiu remover, ou 0 se a lista estiver vazia
int remove_lista()
{
    if (primeiro == -1)
    {
        return 0; // Lista vazia → não há o que remover
    }

    int removido = primeiro;   // Guarda o índice do nó a ser removido
    primeiro = prox[primeiro]; // Atualiza "primeiro" para o próximo elemento
    prox[removido] = livre;    // Nó removido entra na lista de livres
    dados[removido] = 0;       // Opcional: limpa o valor armazenado
    livre = removido;          // Atualiza "livre" para reaproveitar o espaço

    return 1;
}

int main()
{
    inicializa(); // Configura a lista no estado inicial (sem elementos)

    insere(10); // Insere o valor 10 no início da lista
    insere(20); // Insere o valor 20 no início da lista

    int retorno_remove = remove_lista(); // Remove o primeiro elemento da lista

    // Exibe o valor armazenado na posição 0 (apenas para teste)
    printf("%d", dados[0]);
}
