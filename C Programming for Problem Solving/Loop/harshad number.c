#include <stdio.h>

void Harshad (int start, int end)
{
    int i, j, sum;
    for (i = start; i <= end; i++)
    {
        for (j = i, sum = 0; j != 0; j = j / 10)
            sum = sum + (j % 10);
        if (!(i % sum))
            printf ("%d ", i);
    }
}

int main ()
{
    int start, end;
    printf ("Enter range limits (start value and end value): ");
    scanf ("%d%d", &start, &end);
    if (start > end)
        printf ("\nInvalid range limits\n");
    else
        Harshad (start, end);
    return 0;
}
