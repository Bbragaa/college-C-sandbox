#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Aluno {
    char name[30];
    float notaMat;
    float notaPort;
    float notaGeo;
    float notaHist;
};


int main () {

    int alunos[3];



    struct Aluno aluno1;
    printf ("Qual o nome do alnuno?");
    fgets (aluno1.name, 30, stdin);

    printf ("Qual a nota de Matematica do aluno?");
    scanf ("%f", &aluno1.notaMat);

    printf ("Qual a nota de Portugues do aluno?");
    scanf ("%f", &aluno1.notaPort);

    printf ("Qual a nota de Geografia do aluno?");
    scanf ("%f", &aluno1.notaGeo);

    printf ("Qual a nota de Historia do aluno?");
    scanf ("%f", &aluno1.notaHist);

    printf ("Provas do aluno %s\nMatematica: %.2f\nPortugues: %.2f\nGeografia: %.2f\nHistoria: %.2f", aluno1.name, aluno1.notaMat, aluno1.notaPort, aluno1.notaGeo, aluno1.notaHist);
    
    

    getchar();
    return 0;
}
