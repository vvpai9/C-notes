#include <stdio.h>

void fibo (int n)
{
    unsigned int f1, f2, f3, i;
    for (f1 = -1, f2 = i = 1; i <= n; i++)
    {
        f3 = f1 + f2;
        printf ("%d ", f3);
        f1 = f2;
        f2 = f3;
    }
}

int main()
{
    int n;
    printf("Enter number of terms of Fibonnaci series to display: ");
    scanf ("%d", &n);
    printf ("\n");
    if (n > 0)
        fibo (n);
    else
        printf ("Invalid input");
    printf ("\n");
    return 0;
}
