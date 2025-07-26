#include <stdio.h>

int SumEven (int n)
{
    int i = 2, sum = 0;
    while (i <= (2 * n))
    {
        sum = sum + i;
        i = i + 2;
    }
    return sum;
}

int main()
{
    int sum;
    sum = SumEven (10);
    printf ("Sum of first ten even natural numbers: %d\n", sum);
    return 0;
}
