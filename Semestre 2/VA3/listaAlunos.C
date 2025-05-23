#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

struct Aluno {
    char name[30];
    float notaMat;
    float notaPort;
    float notaGeo;
    float notaHist;
};

typedef struct Aluno aluno;

int main () {


    aluno listaAlunos[3];

    for (int i = 0;i < 3;i++){


    printf ("Qual o nome do aluno?\n");
    fgets (listaAlunos[i].name, 30, stdin);
    fflush (stdin);

    printf ("Qual a nota de Matematica do aluno?\n");
    scanf ("%f", &listaAlunos[i].notaMat);

    printf ("Qual a nota de Portugues do aluno?\n");
    scanf ("%f", &listaAlunos[i].notaPort);

    printf ("Qual a nota de Geografia do aluno?\n");
    scanf ("%f", &listaAlunos[i].notaGeo);

    printf ("Qual a nota de Historia do aluno?\n");
    scanf ("%f", &listaAlunos[i].notaHist);

    printf ("Provas do aluno %s\nMatematica: %.2f\nPortugues: %.2f\nGeografia: %.2f\nHistoria: %.2f\n", listaAlunos[i].name, listaAlunos[i].notaMat, listaAlunos[i].notaPort, listaAlunos[i].notaGeo, listaAlunos[i].notaHist);
    }
    

  
    return 0;
}
