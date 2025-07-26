#include <stdio.h>

int main()
{
    float X, loan;
    printf("Enter cost per sqft (in thousands): ");
    scanf ("%f", &X);
    loan = ((X * 1000 * 2400) + (0.12 * X * 1000 * 2400)) * 0.9;
    printf ("\nHousing loan from Canara Bank: %f\n", loan);
    return 0;
}
