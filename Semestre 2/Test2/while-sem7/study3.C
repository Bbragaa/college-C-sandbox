#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int num = -1;

    while (num < 0) {
        printf ("digite um numero positivo:\n");
        scanf ("%d", &num);
    }

    printf ("muito bem!");

    getchar ();
    return 0;
}