#include <stdio.h>

int main()
{
    int i, j, m[2][3], sum;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf ("%d", &m[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += m[i][j];
        }
    }
    printf ("Sum is %d", sum);
    return 0;
}
