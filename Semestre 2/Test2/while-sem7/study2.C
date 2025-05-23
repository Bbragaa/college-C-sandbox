#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int number = -1;
    int sum = 0;

    while (number != 0) {
        printf ("o numero atual eh %d, qual numero deseja que some a esse? \n", sum);
        scanf ("%d",&number);

        sum = sum + number;
    }

    getchar ();
    return 0;
}