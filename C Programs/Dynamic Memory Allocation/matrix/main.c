#include <stdio.h>
#include "matop.h"

int main()
{
    int i, j, m, n, choice, **a;
    printf("Enter number of rows: ");
    scanf ("%d", &m);
    printf("Enter number of columns: ");
    scanf ("%d", &n);
    scanf ("%d", &choice);
    /*a = (int **) malloc (sizeof (int *) * m);
    *a = (int *) malloc (sizeof(int) * m * n);
    for (i = 1; i < m; i++)
    {
        *(a + i) = *(a + i - 1) + n;
    }
    printf ("\nEnter %d integer elements: ", m * n);
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
    }*/
    read (m, n, **a);
    switch (choice)
    {
        case 1 : display (m, n, **a);
                break;

        case 2: add (m, n, **a);
                break;

        case 3 : subtract (m, n, **a);
    }
    free (*a);
    free (a);
    return 0;
}
