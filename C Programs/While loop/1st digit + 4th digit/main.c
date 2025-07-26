#include <stdio.h>

int main()
{
    int n, d, sum = 0;
    printf("Enter a four-digit number: ");
    scanf ("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        sum += d;
        n /= 1000;
    }
    printf ("\nSum of 1st digit and last digit: %d\n", sum);
    return 0;
}
