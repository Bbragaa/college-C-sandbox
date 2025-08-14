#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // Abrindo os files para leitura e escrita, respectivamente
    FILE *f1;
    f1 = fopen("from.txt", "r");

    char word[100];
    char s[1000];
    int existe = 0;

    printf("Qual palavra deseja procurar?\n");
    scanf("%s", word);

    while (fgets(s, 1000, f1) != NULL)
    {
        if (strstr(s, word) != NULL)
        {
            existe = 1;
        }
    }

    if (existe == 1)
    {
        printf("O arquivo possui a palavra %s", word);
    }
    else
    {
        printf("O arquivo não possui a palavra %s", word);
    }

    fclose(f1);

    return 0;
}
