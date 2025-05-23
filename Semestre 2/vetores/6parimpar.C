#include <stdio.h>

int main() {
    int a[20], i;

    for (i = 0;i<20; i++) {
        printf ("Qual o valor da numero inteiro %d \n", i+1);
        scanf ("%d", &a[i]);
    }

    for (i = 0;i<20; i++) {
    
    if (a[i]%2 == 0) {
    printf ("o numero da posicao %d eh par: %d \n", i+1, a[i]);
    }
    }

    for (i = 0;i<20; i++) {
    if (a[i]%2 != 0) {
    printf ("o numero da posicao %d eh impar: %d \n",i+1, a[i]);
    }
    }
    return 0;
}
