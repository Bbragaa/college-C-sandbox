#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int num = -1;

    while (num != 1234) {
        printf ("digite a senha:\n");
        scanf ("%d", &num);
    }
    
    printf ("Bem vindo(a).\n");

    getchar ();
    return 0;
}