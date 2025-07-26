#include <stdio.h>

int main()
{
    float *p;
    p = (float *) malloc (12);
    printf("Enter two numbers: ");
    scanf ("%f %f", p, (p + 1));
    *(p + 2) = *p + *(p + 1);
    printf ("\nSum of %f and %f is %f\n", *p, *(p + 1), *(p + 2));
    free (p);
    return 0;
}
