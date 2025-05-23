#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int num = -1;
    int num2 = 0;

    while (num != 0) {
        printf ("digite um numero positivo:\n");
        scanf ("%d", &num);
       
       if (num > num2) {
        num2 = num;
       }
    }

    printf ("O maior numero digitado foi %d \n", num2);



    getchar ();
    return 0;
}