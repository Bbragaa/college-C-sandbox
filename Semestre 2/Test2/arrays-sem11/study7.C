#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main () {

    float w[5];
    float h[5];
    int i;
    float imc;

    for (i=0;i<5;i++){

        printf ("ola, pessoa %d, digite o seu peso:\n", i+1);
        scanf ("%f",&w[i]);

        printf ("ola, pessoa %d, digite a sua altura em metros no formato x.xx:\n", i+1);
        scanf ("%f",&h[i]);
    }

    for (i=0;i<5;i++){
        imc = w[i] / (pow(h[i], 2));
        printf ("o imc da pessoa %d eh igual a %f\n", i+1, imc);
        if (imc < 18.5){
            printf ("pessoa %d, voce esta abaixo do peso ideal\n", i+1);
    }else if (imc >= 18.5 && imc <= 24.9) {
            printf ("pessoa %d, voce esta no peso ideal\n", i+1);

    }else if (imc >= 25 && imc <= 29.9) {
        printf ("pessoa %d, voce esta acima do ideal\n", i+1);
    } else if (imc > 30){
        printf ("pessoa %d, voce eh gordo pakarai SDKVNSDKVN ta maluco filho o mlk eh uma bola\n", i+1);
    }else {
        printf ("pessoa %d, seu peso eh inexistente ou voce eh burro", i+1);
    }

    }

return 0;
}