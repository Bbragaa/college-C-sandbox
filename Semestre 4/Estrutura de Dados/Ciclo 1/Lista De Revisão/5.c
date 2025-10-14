#include <stdio.h>
int contador_chamadas()
{
    static int c = 0;
    c++;
    return c;
}
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", contador_chamadas());
    }
    return 0;
}
