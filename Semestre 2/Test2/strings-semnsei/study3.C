#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char peca[100];
    char stats[100];
    char info[200]; 

    printf("qual peca voce quer falar sobre?\n");
    fgets(peca, 100, stdin);

    printf("qual o status da peca?\n");
    fgets(stats, 100, stdin);

    // Remove o \n que fgets adiciona
    peca[strcspn(peca, "\n")] = 0;
    stats[strcspn(stats, "\n")] = 0;

    // Copia peca para info e depois concatena stats
    strcpy(info, peca);
    strcat(info, " ");  // Adiciona um espaço entre as strings
    strcat(info, stats);

    puts(info);
    
    getchar();
    return 0;
}