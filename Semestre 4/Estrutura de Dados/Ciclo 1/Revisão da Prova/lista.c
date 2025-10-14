#include <stdio.h>
#define TAMANHO_MAXIMO 100 // Define o tamanho máximo da lista
int lista[TAMANHO_MAXIMO]; // Vetor que representa a lista sequencial
int ultimo = -1;           // Índice do último elemento da lista (-1 indica lista vazia)

// Inicializa a lista, definindo-a como vazia
void inicializa()
{
  ultimo = -1;
}

// Insere um elemento no final da lista
// Retorna 1 se conseguiu inserir, ou 0 se a lista já está cheia
int insere(int valor)
{
  if (ultimo >= TAMANHO_MAXIMO - 1)
  { // Verifica se já chegou ao limite
    return 0;
  }
  ultimo++;              // Avança o índice do último elemento
  lista[ultimo] = valor; // Insere o valor na posição correta
  return 1;
}

// Remove o elemento de uma posição específica da lista
// Retorna 1 se conseguiu remover, ou 0 se a posição for inválida
int remove_lista(int pos)
{
  if (pos < 0 || pos > ultimo)
  { // Verifica se a posição é válida
    return 0;
  }
  // "Shift" dos elementos: move todos os elementos à frente uma posição para trás
  for (int i = pos; i < ultimo; i++)
  {
    lista[i] = lista[i + 1];
  }
  ultimo--; // Atualiza o índice do último elemento
  return 1;
}

// Busca um valor na lista
// Retorna a posição do valor, ou -1 se não encontrar
int busca(int valor)
{
  for (int i = 0; i <= ultimo; i++)
  {
    if (lista[i] == valor)
    { // Se encontrou o valor, retorna a posição
      return i;
    }
  }
  return -1; // Não encontrou
}

int main()
{
  int retorno_insere;

  // Inserindo o elemento 10 na lista
  retorno_insere = insere(10);
  if (retorno_insere == 0)
  {
    printf("Erro ao inserir elemento\n");
  }
  else
  {
    printf("Elemento inserido com sucesso\n");
  }
  printf("%d", lista[0]); // Exibe o primeiro elemento da lista

  // Removendo o elemento da posição 0
  int retorno_remove;
  retorno_remove = remove_lista(0);
  if (retorno_remove == 0)
  {
    printf("Erro ao remover elemento\n");
  }
  else
  {
    printf("Elemento removido com sucesso\n");
  }

  // Buscando o valor 10 na lista
  int retorno_busca;
  retorno_busca = busca(10);
  if (retorno_busca == -1)
  {
    printf("Erro ao buscar elemento\n");
  }
  else
    printf("Elemento encontrado na posição %d\n", retorno_busca);
}
