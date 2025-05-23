#include <stdio.h>
#include <stdlib.h>

int main () {


int num1, num2, result;


printf ("Digite o número que deseja saber o fatorial\n");
scanf ("%d", &num1);
result = num1;

for (num2 = num1 - 1 ; num2 > 0; num2 --) {
    result = result * (num2);    
}

printf ("%d\n", result);

    getchar();
    return 0;
}