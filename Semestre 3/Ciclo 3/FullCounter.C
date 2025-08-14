#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    f1 = fopen("from.txt", "r");

    char s[1000];
    int lineCounter = 0;
    int charCounter = 0;
    int wordCounter = 0;
    int c;

    while (fgets(s, 1000, f1) != NULL)
    {
        lineCounter++;
    }

    fclose(f1);
    f1 = fopen("from.txt", "r");

    while ((c = fgetc(f1)) != EOF)
    {
        charCounter++;
    }

    fclose(f1);
    f1 = fopen("from.txt", "w");

    while (strtok(f1, " ") != NULL)
    {
        wordCounter++;
    }

    fclose(f1);

    return 0;
}
