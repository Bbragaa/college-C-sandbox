#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char log[300];
    size_t i;   //sabia disso aqui n, mas aparentemente o strlen retorna um valor size_t
    int sum = 0;

    printf ("Insira o log do sistema:\n");
    fgets (log, 300, stdin);

    for (i=0;i <= strlen(log);i++){

        if (log[i] == ':'){
            sum = sum + 1;
        }else{
            continue;
        }
    }
    
    printf("nesse log existem %d :\n", sum);


    

    getchar ();
    return 0;
}