#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isUppercase (char letter, char alfabeto[27]){
    for (size_t i = 0; i < 26; i++) {
        if (letter == alfabeto[i]) {
            return 1;
        }         
    }
    return 0;
}

int main () {
    int totalUppercase = 0;
    char palavra[100];
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
    printf ("Ola, declare a frase que deseja saber a quantidade de letras maiusculas: \n");
    fgets (palavra, 100, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    for (size_t i = 0;i < strlen(palavra); i++) {
        if (isUppercase(palavra[i], alfabeto) == 1) {
            totalUppercase += 1;
        }
    }

    printf("Sua palavra tem %d letras maiusculas!", totalUppercase);
    return 0;
};