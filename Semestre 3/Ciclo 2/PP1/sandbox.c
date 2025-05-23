#include <stdio.h> 
#include <stdlib.h> 

int main() { 
 int nAlunos; 
 int i = 0; 
 char nome [20][1]; 

 printf ("Digite o numero de alunos\n"); 
 scanf ("%d", &nAlunos); 
 char alunos[20][nAlunos]; 

 while (i < nAlunos){ 
 printf("Digite o nome do aluno %d \n", i+1); 
 scanf ("%s", &alunos[i]); 
 i++; 
 } 

 // Eu testei o código e imagino que o problema esteja daqui pra baixo, tentei fazer com 
//ponteiros e deu errado,como vetores em C  
 // são tratados como ponteiros que apontam para o primeiro elemento, tentei mudar 
//o tipo da variável do  
 // nome para um vetor, ainda está dando errado, loop infinito. 
 // CONSEGUI RESOLVER, o problema agora é que n estou exibindo o nome. 

    printf ("Agora, digite o nome do aluno a ser buscado\n"); 
    scanf ("%s", &nome[0]); 

    int e = 0; 

 while (e < nAlunos){ 
    if (nome[0] == alunos[e]){ 
 printf ("Aluno encontrado na posicao %d", e+1); //O problema está em algum lugar desse if 
 }else if (e = nAlunos - 1){ 
 printf ("Aluno nao encontrado"); 
 } 
 e++; 
 } 
 return 0; 
} 