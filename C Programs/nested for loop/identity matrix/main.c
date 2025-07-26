#include <stdio.h>

int main()
{
    int i, j, n, count;
    printf ("Enter matrix size: ");
    scanf ("%d", &n);
    int a[n][n];
    printf ("\nEnter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("\nEntered matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
    for (i = 0, count = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
            {
                count = 1;
                break;
            }
        }
        if (count == 1)
        {
            break;
        }
    }
    if (count == 1)
    {
        printf ("\nEntered matrix is not an identity matrix.\n");
    }
    else
    {
        printf ("\nEntered matrix is an identity matrix.\n");
    }
    return 0;
}
