#include <stdio.h>

int prime (int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (!(n % i))
            return 0;
    }
    return 1;
}

int main ()
{
    int n;
    printf ("Enter a number: ");
    scanf ("%d", &n);
    if (prime (n))
        printf ("\n%d is prime\n", n);
    else
        printf ("\n%d is composite\n", n);
    return 0;
}
