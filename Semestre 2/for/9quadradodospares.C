#include <stdio.h>

int main() {

    
    int n, quadrado;

    printf ("Digite o intervalo maximo pro calculo dos quadrados (entre 5 e 2000)\n");
    scanf ("%d", &n);

    for (int i = 1; i <= n && n >= 5 && n <= 2000; i++) {
        if (i % 2 == 0) {
        quadrado = i*i;
        printf ("%d\n", quadrado);
        } else {
        continue;
        }
    }

    if (n <= 5 && n <= 2000) {
        printf ("numero nao esta dentro do intervalo permitido");
    } 

    getchar ();
    return 0;
}

