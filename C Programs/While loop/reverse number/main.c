#include <stdio.h>

int main()
{
    int n, d;
    printf("Enter a number: ");
    scanf ("%d", &n);
    printf ("\nReversed number: ");
    while (n != 0)
    {
        d = n % 10;
        printf ("%d", d);
        n /= 10;
    }
    printf ("\n");
    return 0;
}
