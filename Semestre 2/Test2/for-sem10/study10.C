#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main () {

    int bottom, top, i;
    int sum = 0;

    printf ("digite o menor numero do intervalo a ser analisado.\n");
    scanf ("%d", &bottom);

    printf ("digite o maior numero do intervalo a ser analisado.\n");
    scanf ("%d", &top);

    for (i = bottom; i >= bottom && i <= top; i++) {

        if (i % 2 == 1){
            sum = sum + i;
        }else {
            continue;
        }
    }

    printf ("a soma de todos os numeros pares entre %d e %d eh igual a %d", bottom, top, sum);

return 0;
}