#include <stdio.h>

int divisible (int n)
{
    int sum;
    for (sum = 0; n != 0; n = n / 10)
        sum += n % 10;
    printf ("\nSum of digits: %d\n", sum);
    if (sum % 9 == 0)
        return 1;
    return 0;
}

int main ()
{
    int n;
    printf ("Enter a number: ");
    scanf ("%d", &n);
    if (divisible (n))
        printf ("\n%d is divisible by 9\n", n);
    else
        printf ("\n%d is not divisible by 9\n", n);
    return 0;
}
