#include <stdio.h>
#include "MyFunction.h"

int main()
{
    int *a;
    a = malloc (sizeof (int) * 7);
    printf("Enter two integers: ");
    scanf ("%d%d", a, a + 1);
    sumdiff (a);
    printf ("\nSum: %d\nDifference: %d\nProduct: %d\nQuotient: %d\nRemainder: %d\n", a + 2, a + 3, a + 4, a + 5, a + 6);
    free (a);
    return 0;
}
