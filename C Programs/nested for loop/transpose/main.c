#include <stdio.h>

int main()
{
    int i, j, m, n;
    printf ("Enter number of rows: ");
    scanf ("%d", &m);
    printf ("Enter number of columns: ");
    scanf ("%d", &n);
    int a[m][n];
    printf ("\nEnter elements of %d x %d matrix:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("\nEntered %d x %d matrix:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
    printf ("\nTranspose matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf ("%d ", a[j][i]);
        }
        printf ("\n");
    }
    return 0;
}
