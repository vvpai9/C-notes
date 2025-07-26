#include <stdio.h>

void read (int a[][10], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            scanf ("%d", &a[i][j]);
    }
}

void display (int a[][10], int row, int col)
{
    int i, j;
    for (i = row - 1; i >= 0; i--)
    {
        printf ("\n");
        for (j = 0; j < col; j++)
            printf ("%d ", a[i][j]);
    }
}

int prime (int n)
{
    int i;
    for (i = 2; i <= n / 2;  i++)
    {
        if (!(n % i))
            return 0;
    }
    return 1;
}

int perfect (int n)
{
    int i, sum;
    for (sum = 0, i = 1; i < n; i++)
    {
        if (!(n % i))
            sum = sum + i;
    }
    if (sum == n)
        return 1;
    return 0;
}

void solve (int a[][10], int row, int col)
{
    int i, j, sum, count;
    for (i = 0, sum = 0, count = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (perfect (a[i][j]))
            {
                sum = sum + a[i][j];
                count++;
            }
        }
    }
    printf ("\nSum of perfect numbers\n%d\n%d\n", sum, count);
    if (prime(count))
        printf ("\n%d is a prime number\n", count);
    else
        printf ("\n%d is not a perfect number\n", count);
}

int main()
{
    int row, col;
    printf("\nEnter matrix size:\n");
    scanf ("%d%d", &row, &col);
    int a[10][10];
    if (row > 0 && col > 0 && col <= 10)
    {
        printf ("Enter matrix elements:\n");
        read (a, row, col);
        printf ("Matrix after interchanging:");
        display(a, row, col);
        solve (a, row, col);
    }
    else
        printf ("\nInvalid Input\n");
    return 0;
}
