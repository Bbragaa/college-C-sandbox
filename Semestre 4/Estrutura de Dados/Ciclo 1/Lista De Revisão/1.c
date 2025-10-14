#include <stdio.h>
int main()
{
    int a[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        a[i] = i * 3;
    }
    for (i = 0; i < 10; i += 2)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
