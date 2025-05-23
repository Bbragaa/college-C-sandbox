#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int palindromo (char palavra[100], int inicio, int fim) {
    if (inicio >= fim){
        return 1;
    } else if (palavra [inicio] != palavra[fim]) {
        return 0;
    }

    return palindromo (palavra, inicio + 1, fim - 1);
};

int main () {
    char palavra[100];

    printf ("Por favor, indique a palavra que quer conferir se eh um palindromo em letras minusculas e sem acento:\n");
    fgets(palavra, 100, stdin);
    
    palavra[strcspn(palavra, "\n")] = '\0';   //PRESTAR ATENÇÃO NISSO!

    int tamanho = strlen(palavra);

    int result = palindromo(palavra, 0, tamanho - 1);

    if (result == 1) {
        printf ("eh palindromo");
    } else {
        printf ("nau eh palindromo");
    }

  
    
    return 0;
};
