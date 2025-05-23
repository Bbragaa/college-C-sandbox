#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

struct aluno {
    char name[30];
    int age;
    float grades[3];
    float average;
};

typedef struct aluno aluno;


int main () {
    int i;
    aluno alunos[3];
    for (i = 0;i < 3;i++){

    printf ("Qual o nome do aluno?\n");
    fgets (alunos[i].name, 30, stdin);
    fflush(stdin);

    printf ("Qual a idade do aluno?\n");
    scanf ("%d", &alunos[i].age);

    printf ("Qual a nota 1 do aluno?\n");
    scanf ("%f", &alunos[i].grades[0]);

    printf ("Qual a nota 2 do aluno?\n");
    scanf ("%f", &alunos[i].grades[1]);

    printf ("Qual a nota 3 do aluno?\n");
    scanf ("%f", &alunos[i].grades[2]);

    alunos[i].average = (alunos[i].grades[0] + alunos[i].grades[1] + alunos[i].grades[2])/3;
    }
    printf ("Nome: %s\nIdade: %d\nNotas:\n%.2f\n%.2f\n%.2f\nMedia: %.2f\n\n\n", alunos[0].name, alunos[0].age, alunos[0].grades[0], alunos[0].grades[1], alunos[0].grades[2]);

    printf ("Nome: %s\nIdade: %d\nNotas:\n%.2f\n%.2f\n%.2f\nMedia: %.2f\n\n\n", alunos[1].name, alunos[1].age, alunos[1].grades[0], alunos[1].grades[1], alunos[1].grades[2]);

    printf ("Nome: %s\nIdade: %d\nNotas:\n%.2f\n%.2f\n%.2f\nMedia: %.2f\n\n\n", alunos[2].name, alunos[2].age, alunos[2].grades[0], alunos[2].grades[1], alunos[2].grades[2]);
    return 0;
}
