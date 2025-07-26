#include <stdio.h>

int main()
{
    float l, w, r, areac, arear;
    printf("Enter length of rectangle: ");
    scanf ("%f", &l);
    printf("Enter width of rectangle: ");
    scanf ("%f", &w);
    printf("Enter radius of circle: ");
    scanf ("%f", &r);
    arear = l * w;
    areac = 3.142 * r * r;
    printf ("\nArea of circle: %f\nArea of rectangle: %f\n", areac, arear);
    return 0;
}
