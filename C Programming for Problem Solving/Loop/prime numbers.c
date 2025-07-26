#include <stdio.h>

void prime (int start, int end)
{
    int i, j, count;
    printf ("\nPrime numbers within range (%d, %d): ", start, end);
    for (i = start; i <= end; i++)
    {
        for (j = 2, count = 1; i > 1 && j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count = 0;
                break;
            }
        }
        if (count && i > 1)
            printf ("%d ", i);
    }
    printf ("\n");
}

int main ()
{
    int start, end;
    printf ("Enter start value: ");
    scanf ("%d", &start);
    printf ("Enter end value: ");
    scanf ("%d", &end);
    if (start < end)
        prime (start, end);
    else
        printf ("\nInvalid range limits\n");
    return 0;
}
