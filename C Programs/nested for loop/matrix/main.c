#include <stdio.h>

int i, j, k, m, n, o, p, mat1[100][100], mat2[100][100], res[100][100];

void transpose ()
{
    printf ("\nYou have chosen to transpose %d x %d matrix.\nEnter %d integers:\n", m, n, m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &mat1[i][j]);
        }
    }
    printf ("\nEntered %d x %d matrix:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", mat1[i][j]);
        }
        printf ("\n");
    }
    printf ("\nTransposed matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf ("%d ", mat1[j][i]);
        }
        printf ("\n");
    }
}

void add()
{
    printf ("\nYou have chosen to add two %d x %d matrices.\nEnter %d integers for matrix 1:\n", m, n, m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &mat1[i][j]);
        }
    }
    printf ("\nEnter %d integers for matrix 2:\n", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &mat2[i][j]);
        }
    }
    printf ("\nEntered %d x %d matrix 1:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", mat1[i][j]);
        }
        printf ("\n");
    }
    printf ("\nEntered %d x %d matrix 2:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", mat2[i][j]);
        }
        printf ("\n");
    }
    printf ("\nSum of matrices 1 and 2:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf ("\n");
    }
}

void subtract()
{
    printf ("\nYou have chosen to subtract two %d x %d matrices.\nEnter %d integers for matrix 1:\n", m, n, m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &mat1[i][j]);
        }
    }
    printf ("\nEnter %d integers for matrix 2:\n", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &mat2[i][j]);
        }
    }
    printf ("\nEntered %d x %d matrix 1:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", mat1[i][j]);
        }
        printf ("\n");
    }
    printf ("\nEntered %d x %d matrix 2:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", mat2[i][j]);
        }
        printf ("\n");
    }
    printf ("\nDifference of matrices 1 and 2:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d ", mat1[i][j] - mat2[i][j]);
        }
        printf ("\n");
    }
}

void multiply ()
{
    if (m == o)
    {
        printf ("\nYou have chosen to multiply %d x %d matrix with %d x %d matrix.\nEnter %d integers for matrix 1:\n", m, n, o, p, m * n);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf ("%d", &mat1[i][j]);
            }
        }
        printf ("\nEnter %d integers for matrix 2:\n", o * p);
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                scanf ("%d", &mat2[i][j]);
            }
        }
        printf ("\nEntered %d x %d matrix 1:\n", m, n);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf ("%d ", mat1[i][j]);
            }
            printf ("\n");
        }
        printf ("\nEntered %d x %d matrix 2:\n", o, p);
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf ("%d ", mat2[i][j]);
            }
            printf ("\n");
        }
        printf ("\nProduct of matrices 1 and 2:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                for (k = 0; k < p; k++)
                {
                    res[i][j] = mat1[i][j] * mat2[j][k];
                }
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf ("%d ", res[i][j]);
            }
            printf ("\n");
        }
    }
    else
    {
        printf ("Matrices cannot be multiplied.");
    }
}

int main()
{
    char choice;
    do
    {
        printf ("Enter matrix operations: [T - Transpose matrix; A - Add matrices; S - Subtract matrices; M - Multiply matrices; E - Exit]");
        choice = getchar ();
        switch (choice)
        {
            case 'T' :
            case 't' : printf ("Enter number of rows: ");
                        scanf ("%d", &m);
                        printf ("Enter number of columns: ");
                        scanf ("%d", &n);
                        transpose ();
                        break;
            case 'A' :
            case 'a' : printf ("Enter number of rows: ");
                        scanf ("%d", &m);
                        printf ("Enter number of columns: ");
                        scanf ("%d", &n);
                        add ();
                        break;
            case 's' :
            case 'S' : printf ("Enter number of rows: ");
                        scanf ("%d", &m);
                        printf ("Enter number of columns: ");
                        scanf ("%d", &n);
                        subtract ();
                        break;
            case 'M' :
            case 'm' : printf ("Enter number of rows of matrix 1: ");
                        scanf ("%d", &m);
                        printf ("Enter number of columns of matrix 1: ");
                        scanf ("%d", &n);
                        printf ("\nEnter number of rows of matrix 2: ");
                        scanf ("%d", &o);
                        printf ("Enter number of columns of matrix 1: ");
                        scanf ("%d", &p);
                        multiply ();
                        break;
            case 'e' :
            case 'E' : exit (0);
            default : printf ("Invalid choice");

        }
    } while (choice != 'E' || choice != 'e');
    return 0;
}
