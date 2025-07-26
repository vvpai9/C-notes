#include <stdio.h>

int main()
{
    float r, l, w, time;
    printf("Enter radius of hut: ");
    scanf ("%f", &r);
    printf("Enter length of lawn: ");
    scanf ("%f", &l);
    printf("Enter width of lawn: ");
    scanf ("%f", &w);
    time = ((l * w) - (3.141592 * r * r) / 2.0);
    printf ("\nTime taken to cut grass: %f\n", time);
    return 0;
}
