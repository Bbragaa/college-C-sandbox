#include <stdio.h> 
#include <stdlib.h> 

 

 

 

int main(){ 
 
 int matriz [3][3]; 
 int adicao; 
 

 

 printf ("Digite o elemento da linha 1 coluna 1\n"); 
 scanf ("%d", &matriz [1][1]); 
 printf ("Digite o elemento da linha 1 coluna 2\n"); 
 scanf ("%d", &matriz [1][2]); 
 printf ("Digite o elemento da linha 1 coluna 3\n"); 
 scanf ("%d", &matriz [1][3]); 
 printf ("Digite o elemento da linha 2 coluna 1\n"); 
 scanf ("%d", &matriz [2][1]); 
 printf ("Digite o elemento da linha 2 coluna 2\n"); 
 scanf ("%d", &matriz [2][2]); 
 printf ("Digite o elemento da linha 2 coluna 3\n"); 


 scanf ("%d", &matriz [2][3]); 
 printf ("Digite o elemento da linha 3 coluna 1\n"); 
 scanf ("%d", &matriz [3][1]); 
 printf ("Digite o elemento da linha 3 coluna 2\n"); 
 scanf ("%d", &matriz [3][2]); 
 printf ("Digite o elemento da linha 3 coluna 3\n"); 
 scanf ("%d", &matriz [3][3]); 
 
 
 printf("A matriz atual eh: \n"); 
 
 printf ("%d ", matriz [1][1]); 
 printf ("%d ", matriz [1][2]); 
 printf ("%d\n", matriz [1][3]); 

 

 printf ("%d ", matriz [2][1]); 
 printf ("%d ", matriz [2][2]); 
 printf ("%d\n", matriz [2][3]); 
 
 printf ("%d ", matriz [3][1]); 
 printf ("%d ", matriz [3][2]); 
 printf ("%d\n", matriz [3][3]); 
 
 printf ("Digite o numero que deseja adicionar aos elementos da matriz\n"); 
 scanf ("%d", &adicao); 
 
 matriz [1][1] += adicao; 
 matriz [1][2] += adicao; 
 matriz [1][3] += adicao; 
 matriz [2][1] += adicao; 
 matriz [2][2] += adicao; 
 matriz [2][3] += adicao; 
 matriz [3][1] += adicao; 
 matriz [3][2] += adicao; 
 matriz [3][3] += adicao; 
 
 printf("A matriz ajustada eh: \n"); 
 
 printf ("%d ", matriz [1][1]); 
 printf ("%d ", matriz [1][2]); 
 printf ("%d\n", matriz [1][3]); 

 

 printf ("%d ", matriz [2][1]); 
 printf ("%d ", matriz [2][2]); 
 printf ("%d\n", matriz [2][3]); 
 
 printf ("%d ", matriz [3][1]); 
 printf ("%d ", matriz [3][2]); 
 printf ("%d\n", matriz [3][3]); 

 

 return 0; 
} 

 

 