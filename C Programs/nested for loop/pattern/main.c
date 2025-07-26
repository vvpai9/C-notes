#include <stdio.h>

int main()
{
    int i, j, k = 0;
    for (i = 1, j = 0; i <= 5; i++)
    {
        for (; j < (i + k); j++)
        {
            if (j > 9)
            {
                j = 0;
            }
            printf ("%d ", j);
        }
        k = i;
        printf ("\n");
    }
    return 0;
}
