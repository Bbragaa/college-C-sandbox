#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char str[100];
    int l;
    printf ("Digite qualquer poha\n");
    fgets (str, 100, stdin);

    l = strlen(str);

    printf ("o que voce escreveu tem um total de %d caracteres\n", l);
    getchar ();
    return 0;
}