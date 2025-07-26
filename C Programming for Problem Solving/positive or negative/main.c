#include <stdio.h>

int main()
{
    float n;
    printf("Enter a number: ");
    scanf ("%f", &n);
    if (n > 0)
        printf ("\n%f is positive\n", n);
    else if (n < 0)
        printf ("\n%f is negative\n", n);
    else
        printf ("\nZero\n");
    return 0;
}
