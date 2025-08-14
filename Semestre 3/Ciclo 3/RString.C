#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f1p;
    f1p = fopen("entrada.txt", "r");

    char s[1000];
   

    if (f1p == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    while(fgets(s, 1000, f1p) != NULL){
        printf("%s", s);
    }
    fclose(f1p);

    return 0;
}