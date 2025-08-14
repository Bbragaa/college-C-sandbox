#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f1;
    f1 = fopen("from.txt", "a");

    fputs ("\npride month", f1);

    fclose(f1);

    return 0;
}
