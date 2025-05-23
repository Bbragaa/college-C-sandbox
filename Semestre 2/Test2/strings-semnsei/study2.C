#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char str[100];
    char alerta[7] = {"ALERTA"};

    printf ("Copie e cole o log do sistema\n");
    fgets (str, 100, stdin);


    if (strstr (str, alerta) == NULL) {
        printf ("nao existe uma alerta no log");
    }else {
        printf ("existe uma alerta no log");
    }

    getchar ();
    return 0;
}