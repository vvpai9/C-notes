#include <stdio.h>

void pattern (int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        printf ("\n");
        for (j = 1; j <= i; j++)
            printf ("* ");
    }
}

int main ()
{
    int n;
    printf ("Enter number of rows: ");
    scanf ("%d", &n);
    pattern (n);
    printf ("\n");
    return 0;
}
