#include <stdio.h>
#include <stdlib.h>

int main () {


int num1, num2, result = 0;


printf ("Digite o numero pra definir o intervalo de pares\n");
scanf ("%i", &num1);

for (num2 = num1; num2 > 1 && num2 <= num1; num2 --) {
    if (num2 % 2 == 0){
    printf ("%i\n",num2); 
    result = result + num2;
    } else {
        continue;
    } 
}
    printf ("A soma de todos esses numeros eh engual a %i", result);

    getchar();
    return 0;
}