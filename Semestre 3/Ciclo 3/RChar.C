#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f1p;
    f1p = fopen("entrada.txt", "r");
       
    int c;

    if (f1p == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

   while((c = fgetc(f1p)) != EOF) {
        putchar(c);
    }

    fclose(f1p);


    return 0;
}
                                                                                                                                                                                                   