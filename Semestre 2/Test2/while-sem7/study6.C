#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int num = -1;

    while (num != 0) {
        printf ("digite um numero:\n");
        scanf ("%d", &num);
        if (num % 2 == 0){
            printf ("seu numero eh par\n");
        } else {
            printf ("seu numero eh impar\n");
        }
    }

    getchar ();
    return 0;
}