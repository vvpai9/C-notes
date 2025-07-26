#include <stdio.h>

int main()
{
    int N;
    float D, H, cost;
    printf ("Enter number of soup cans: ");
    scanf ("%d", &N);
    printf ("Enter diameter of each soup can: ");
    scanf ("%f", &D);
    printf ("Enter height of each soup can: ");
    scanf ("%f", &H);
    cost = 3.141593 * D * H * N * 0.6952;
    printf ("\nCost needed to purchase paper: Rs. %f\n", cost);
    return 0;
}
