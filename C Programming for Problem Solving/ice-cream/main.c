#include <stdio.h>

int main()
{
    int N;
    float r, l, cost;
    printf("Enter number of ice-cream cones: ");
    scanf ("%d",&N);
    printf("Enter radius of each ice-cream cone: ");
    scanf ("%f",&r);
    printf("Enter slant height of each ice-cream cone: ");
    scanf ("%f",&l);
    cost = 3.141593 * r * l * N * 15;
    printf ("\nTotal cost of packing paper: %f\n", cost);
    return 0;
}
