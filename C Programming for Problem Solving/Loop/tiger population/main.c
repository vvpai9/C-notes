#include <stdio.h>

void pop (int x, float y, int z)
{
    int i, t = 0;
    for (i = 2003; i <= (2003 + z); i++, t++)
    {
        x = x + x * y / 100 * t;
        printf ("\n%d - %d", i, x);
    }
}

int main()
{
    float y;
    int z, x;
    printf("Enter tiger population in 2003, rate of increase per annum and number of years to display: ");
    scanf ("%d%f%d", &x, &y, &z);
    pop (x, y, z);
    return 0;
}

