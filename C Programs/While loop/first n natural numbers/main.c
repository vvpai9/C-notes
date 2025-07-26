#include <stdio.h>

int main()
{
    int i, n;
    while (i > 0)
    {
        i = 1;
        printf("\nEnter how many natural numbers to display: ");
        scanf ("%d", &n);
        while (i <= n)
        {
            printf ("%d\n", i);
            i ++;
        }
    }
    return 0;
}
