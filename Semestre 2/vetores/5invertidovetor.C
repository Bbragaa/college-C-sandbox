#include <stdio.h>

int main() {
    int a[8], b[8]; 
    int i;

    printf("Digite 8 valores para o vetor A:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 8; i++) {
        b[i] = a[7 - i];
    }

    printf("Vetor B (inverso de A):\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
