#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Abrindo os files para leitura e escrita, respectivamente
    FILE *f1; 
    f1 = fopen("from.txt", "r"); 

    FILE *f2;
    f2 = fopen("to.txt", "w");
    // Declarando variáveis
    int c;
    
    // Conferindo se as aberturas foram feitas
    if (f1 != NULL && f2 != NULL){
        printf ("Arquivos abertos com sucesso\n");
    } else {
        printf ("Erro\n");
    }

    // Lógica de copiar e colar o conteúdo
    while ((c = fgetc(f1)) != EOF) {
        fputc(c, f2);
    }
    fclose (f2);
    f2 = fopen("to.txt", "r");

    while ((c = fgetc(f2)) != EOF) {
        putchar(c);
    }

    // Fechando os files
    fclose(f1);
    fclose(f2);


    return 0;
}
