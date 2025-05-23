#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float h[5],p[5], imc;
    int i;

    for (i=0;i<5;i++) {
        printf ("Digite o peso da pessoa %d\n", i+1);
        scanf ("%f", &p[i]);
        printf ("Digite a altura da pessoa %d\n", i+1);
        scanf ("%f", &h[i]);
    }
    
    for (i=0;i<5;i++) {
        imc = (p[i])/pow(h[i], 2);
        if (imc<18.5) {
            printf ("O IMC da pessoa %d eh igual a %f e ela esta abaixo do seu peso ideal\n", i+1, imc);
        } else if (imc<24.9 && imc>10.5) {
            printf ("O IMC da pessoa %d igual a %f e ela esta no seu peso ideal\n", i+1, imc);
        } else if (imc<29.9 && imc>25) {
            printf ("O IMC da pessoa %d eh igual a %f e ela esta com sobrepeso\n", i+1, imc);
        } else {
            printf ("O IMC da pessoa %d eh igual a %f e voce esta obeso \n", i+1, imc);
        }
   }
    return 0;
}
