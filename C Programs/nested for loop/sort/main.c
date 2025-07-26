#include <stdio.h>

int main()
{
    int n, i, j, l, k;
    printf("Enter number of integers: ");
    scanf ("%d", &n);
    int a[n];
    k = n;
    printf ("Enter integers: ")
    for (i = 0, i < n; i++)
    {
        scanf ("%d", &a[i]);
    }
    for (i = 0, l = 0; i < n; i++, n--)
    {
        for (j = 1; j < n; j++)
        {
            if (a[j] > a[l])
            {
                l = j;
            }
        }
        a[n] = a[n] + a[l];
        a[l] = a[n] - a[l];
        a[n] = a[n] - a[l];
    }
    for (i = 0; i < k; i++)
    {
        printf ("%d\n", a[i]);
    }
    return 0;
}
