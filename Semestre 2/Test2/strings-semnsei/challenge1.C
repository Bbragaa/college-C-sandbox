#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int alunos, i;
    char nomes[30][30];
    int notas[30];

    printf ("Quantos alunos tem na sala?");
    scanf ("%d", &alunos);

  
    for (i=1;i<=alunos;i++) {
        printf ("qual o nome do aluno %d?", i);
        fgets (nomes[i-1],30,stdin);
        fflush (stdin);

        printf("Qual foi a nota do aluno?");
        scanf ("%d", &notas[i-1]);
    }
    

    getchar ();
    return 0;
}