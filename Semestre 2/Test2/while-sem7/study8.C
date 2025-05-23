#include <stdio.h>

int main() {
    int num;
    
    printf("digite numeros positivos (numero negativo para parar):\n");
    printf("\nnumeros digitados:\n");
    
    do {
        scanf("%d", &num);
        if(num >= 0) {
            printf("%d ", num);
        }
    } while(num >= 0);
    printf("\n");
    
    getchar ();
    return 0;
}
//não sei como fazer sem utilizar arrays