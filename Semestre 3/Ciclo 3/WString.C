#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f1p;
    f1p = fopen("saida.txt", "w");
    
    fputs("Linha 1\n", f1p);
    fputs("Linha 2", f1p);

    int result = fclose(f1p);

    if (result == 0) {
        printf ("Sucesso");
    } else {
        printf ("Fracasso");
    }

    return 0;
}

 