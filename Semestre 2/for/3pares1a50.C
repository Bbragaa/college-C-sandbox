#include <stdio.h>
#include <stdlib.h>

int main () {


int num;


for (num = 1 ; num <= 50; num ++ ) {
    if (num % 2 == 0) {
    printf ("%i\n", num);
    } else {
        continue;
    }
}


    getchar();
    return 0;
}