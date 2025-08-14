#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1; 
    f1 = fopen("from.txt", "r"); 

    char s[1000];
    int counter = 0;

    while (fgets(s, 1000, f1) != NULL) {
        counter++;
    }

    printf ("Esse arquivo tem %d linhas", counter);

    fclose(f1);


    return 0;
}
