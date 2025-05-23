#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int num;
    int num2 = 10;

    
    printf ("qual numero deseja saber a tabuada?\n");
    scanf ("%d", &num);

    while (num2 != 0){
        int result = num * num2;
        printf ("%d x %d eh igual a %d\n", num, num2, result);
        num2 = num2 - 1;
    }

    getchar ();
    return 0;
}