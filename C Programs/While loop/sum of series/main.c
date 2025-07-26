#include <stdio.h>

int main()
{
    int i = 1;
    float d, sum = 0;
    while (i <= 5)
    {
        d = 1.0 / i;
        sum += d;
        i ++;
    }
    printf ("Sum of series: %f\n", sum);
    return 0;
}
