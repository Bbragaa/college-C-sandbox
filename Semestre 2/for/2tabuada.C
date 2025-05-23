#include <stdio.h>
#include <stdlib.h>

int main () {


int num, tab, result;

printf ("Digite um numero que vc queira saber a tabuada\n");
scanf ("%i", &tab);


for (num = 0 ; num >= 0 && num <= 10; num ++ ) {
    result = tab * num;
    printf ("Seu numero vezes %i eh engual a %i\n", num, result);
}


    getchar();
    return 0;
}