#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    float a[12];
    float b[12];
    int i;

    //Receive vector values

    for (i=0; i<=11; i++) {
        printf ("Qual o valor da posicao %d do vetor a: \n", i);
        scanf ("%f", &a[i]);
        b[i] = (a[i]) * 10;

    }

    for (i=0; i<=11; i++) {
    printf ("a posicao %d do vetor b eh %.2f \n", i,  b[i]);
    }    

    getchar ();
    return 0;
}