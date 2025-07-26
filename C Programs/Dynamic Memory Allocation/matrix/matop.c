#include <stdio.h>

int i, j;

void read (int m, int n, int **a)
{
    a = (int **) malloc (sizeof (int *) * m);
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
}

void display (int m, int n, int **a)
{
    printf ("\nEntered %d x %d matrix:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
}

void add (int m, int n, int **a)
{
    int **b, **c;
    b = (int **) malloc (sizeof (int *) * m);
    *b = (int *) malloc (sizeof(int) * m * n);
    c = (int **) malloc (sizeof (int *) * m);
    *c = (int *) malloc (sizeof(int) * m * n);
    for (i = 1; i < m; i++)
    {
        *(b + i) = *(b + i - 1) + n;
    }
    printf ("\nEnter %d integer elements: ", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf ("\nResultant matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }
}

void subtract (int m, int n, int **a)
{
    int **b, **c;
    b = (int **) malloc (sizeof (int *) * m);
    *b = (int *) malloc (sizeof(int) * m * n);
    c = (int **) malloc (sizeof (int *) * m);
    *c = (int *) malloc (sizeof(int) * m * n);
    for (i = 1; i < m; i++)
    {
        *(b + i) = *(b + i - 1) + n;
    }
    printf ("\nEnter %d integer elements: ", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf ("\nResultant matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }
}
