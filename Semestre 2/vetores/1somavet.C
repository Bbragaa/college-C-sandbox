#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    float peso[7];
    float result = 0;
    int i;

    //Receive vector values

    for (i=1; i<7; i++) {
        printf ("Qual o valor da posicao %d: \n", i);
        scanf ("%f", &peso[i]);
        result = result + peso [i];

    }

    printf ("%f", result);




    getchar ();
    return 0;
}