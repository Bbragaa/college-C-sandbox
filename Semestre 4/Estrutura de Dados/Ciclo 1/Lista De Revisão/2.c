#include <stdio.h>
int main()
{
    int m[3][3];
    int s[3] = {0, 0, 0};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
            s[j] += m[i][j];
        }
    }
    for (j = 0; j < 3; j++)
    {
        printf("%d ", s[j]);
    }
    printf("\n");
    return 0;
}
