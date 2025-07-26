#include <stdio.h>

void series (int n)
{
    int l1 = 2, l2  = 1, i, l3;
    printf ("\n%d %d ", l1, l2);
    for (i = 3; i <= n; i++)
    {
        l3 = l1 + l2;
        printf ("%d ", l3);
        l1 = l2;
        l2 = l3;
    }
    printf ("\n");
}

int main ()
{
    int n;
    printf ("Enter number of terms of Lucas series to display: ");
    scanf ("%d", &n);
    series (n);
    return 0;
}
