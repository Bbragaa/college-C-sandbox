#include <stdio.h>

int main() {
    int num;

    do {
        printf("Insira um número positivo: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("Número inválido! Por favor, insira um número positivo.\n");
        }
    } while (num < 0);

    printf("Você inseriu o número: %d\n", num);
    return 0;
}
