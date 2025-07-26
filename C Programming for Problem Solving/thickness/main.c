#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float t, L;
    printf("Enter number of folds: ");
    scanf ("%d", &n);
    printf("Enter thickness of paper: ");
    scanf ("%f", &t);
    L = 3.142 / 6 * t * (pow(2, n) + 4) * (pow(2, n) - 1);
    printf ("\nMinimum length of the paper: %f\n(The units of length are the same as the units of thickness)\n", L);
    return 0;
}
