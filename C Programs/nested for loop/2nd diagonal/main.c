#include <stdio.h>

int main()
{
    int i, j, n, sum;
    printf("Enter square matrix size: ");
    scanf ("%d", &n);
    int a[n][n];
    printf ("Enter square matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("\nEntered %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
    for (i = 0, sum = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == n - i - 1)
            {
                sum += a[i][j];
            }
        }
    }
    printf ("\nSum of 2nd diagonal elements of entered matrix is %d\n", sum);
    return 0;
}
