#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    float peso[7];
    float soma = 0;
    int i;

    //Receive vector values

    for (i=1; i<=7; i++) {
        printf ("Qual o valor da posicao %d: \n", i);
        scanf ("%f", &peso[i]);
        soma = soma + peso [i];

    }

    float result = soma/7;
    printf ("%f", result);




    getchar ();
    return 0;
}