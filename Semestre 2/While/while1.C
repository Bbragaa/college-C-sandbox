#include <stdio.h>

int main () {

    int num;

    while (num != 0) {
    

    printf ("Digite o numero 0, ou outro número, e nao mando na sua vida\n");
    scanf ("%d", &num);

    if (num % 2 == 0 && num != 0) {
        printf ("Seu numero eh par, mas nao zero\n");
        
    } else if (num != 0){
        printf ("Seu numero eh impar, mas ainda nao e zero\n");
    } else {
       printf ("Seu numero eh zero parabens ebaa\n"); 
    }

    }





    getchar();
    return 0;
}