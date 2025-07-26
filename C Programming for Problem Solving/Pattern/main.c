#include <stdio.h>

int min (int i, int j)
{
    if (i < j)
        return i;
    return j;
}

void pattern (int n)
{
    int i, j;
    for (i = 0; i < n * 2 - 1; i++)
    {
        printf ("\n");
        for (j = 0; j < n * 2 - 1; j++)
        {
           if (i == n * 2 - 2 || j == n * 2 - 2)
                printf ("%d ", n);
           else
                printf ("%d ", n - min(i, j));
        }
    }
}

int main ()
{
    int n;
    scanf ("%d", &n);
    if (n > 0)
        pattern (n);
    else
        printf ("\nInvalid input\n");
    return 0;
}
