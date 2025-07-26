#include <stdio.h>

int main()
{
    float miles, kms;
    printf("Enter distance in miles: ");
    scanf ("%f", &miles);
    kms = miles * 1.6;
    printf ("\nDistance in kms = %f\n", kms);
    return 0;
}
