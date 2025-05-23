#include <stdio.h>
#include <stdlib.h>

int main () {


int quant, i, result, num1, num2;


printf ("Digite o número de intervalo da sequência de Fibinacci\n");
scanf ("%i", &quant);


for (i = 0; i <= quant; i ++) {
    if (i > 1) {
    result = num1 + num2;
    printf ("%i\n", result);
    } else {
    result = 1;
    num1 = result;
    num2 = num1;
    printf ("%i\n", result);
    }

    
    num1 = num2;
    num2 = result;
}


    getchar();
    return 0;
}