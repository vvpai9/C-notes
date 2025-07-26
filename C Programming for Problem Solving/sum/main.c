#include <stdio.h>

int main()
{
    float a, b, c, d;
    printf("Enter a number: ");
    scanf ("%f", &a);
    printf("Enter another number: ");
    scanf ("%f", &b);
    printf("Enter another number: ");
    scanf ("%f", &c);
    d = a + b + c;
    printf ("\nSum of %f, %f and %f is %f\n", a, b, c, d);
    return 0;
}
