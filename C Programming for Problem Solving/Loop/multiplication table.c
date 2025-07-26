#include <stdio.h>

void table (int n)
{
    int i;
    for (i = 1; i <= 10; i++)
        printf ("%d x %d = %d\n", n, i, n * i);
}

int main ()
{
    int n;
    printf ("Enter a number: ");
    scanf ("%d", &n);
    printf ("\nMultiplication table of %d:\n", n);
    table (n);
    return 0;
}
