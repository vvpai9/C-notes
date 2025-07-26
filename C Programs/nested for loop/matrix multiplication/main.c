#include <stdio.h>

int main()
{
    int i, j, k, m, n;
    printf ("Enter number of rows: ");
    scanf ("%d", &m);
    printf ("Enter number of columns: ");
    scanf ("%d", &n);
    int a[m][n], b[n][m], c[m][m];
    printf ("\nEnter %d integers for matrix 1:\n", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("\nEnter %d integers for matrix 2:\n", m * n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0, c[i][j] = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf ("\nResultant matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
