#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main () {
    int totalVowels = 0;
    char palavra[50];

    printf ("Ola, qual palavra deseja inspecionar?\n");
    fgets (palavra, 50, stdin);
    palavra [strcspn(palavra, "\n")] = '\0';

    for (int i = 0;i < strlen(palavra); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            totalVowels += 1;
        }
    }

    printf ("Sua palavra tem um total de %d vogais.", totalVowels);
    return 0;

};