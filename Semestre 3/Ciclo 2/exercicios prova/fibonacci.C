#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int fibonacci (int position, int n1, int n2) {
    if (position == 1) {
        return n1;
    }else if (position <= 2) {
        return n2;
    }
    
    int n3 = n1;
    n1 = n2;
    n2 += n3;
    position -= 1;

    return fibonacci(position, n1, n2);

};

int main () {
    int position;

    printf ("qual a posicao do valor dos numeros de fibonacci voce deseja saber? \n");
    scanf ("%d", &position);

    int result = fibonacci(position, 1, 1);

    printf ("seu numero eh %d", result);
    return 0;
};