#include <stdio.h>
#include <stdlib.h>
int main()

{

  float vetor[10];
  int i, j;
  float aux;

  printf("forneca 10 valores:\n");
  for (i = 0; i < 10; i++)
  {
  printf("digite o %d valor: \n", i + 1);
    scanf("%f", &vetor[i]);
  }

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 9 - i; j++)
    {
      if (vetor[j] > vetor[j + 1])
      {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }

  printf("\nOrdem crescente: ");
  for (i = 0; i < 10; i++)
  {
    printf("%.0f \n", vetor[i]);
  }


  return 0;
}