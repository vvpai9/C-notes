#include <stdio.h>

void read (int a[][10], int row, int col)
{
	int i, j;
	printf ("\nEnter %d elements: ", row * col);
	for  (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			scanf ("%d", &a[i][j]);
	}
}

void display (int a[][10], int row, int col)
{
	int i, j;
	for  (i = 0; i < row; i++)
	{
		printf ("\n");
		for (j = 0; j < col; j++)
			printf ("%d ", a[i][j]);
	}
}

int eleSum (int a[][10], int row, int col)
{
    int i, j, sum;
    for (i = 0; i < row; i++)
        for (j = sum = 0; j < col; sum += a[i][j], j++);
    return sum;
}

void rowSum (int a[][10], int row, int col)
{
    int i, j, sum;
    for (i = 0; i < row; i++)
    {
        for (j = sum = 0; j < col; sum += a[i][j], j++);
        printf ("\nSum of Row %d: %d", i + 1, sum);
    }
}

void colSum (int a[][10], int row, int col)
{
    int i, j, sum;
    for (i = 0; i < col; i++)
    {
        for (j = sum =  0; j < row; sum += a[j][i], j++);
        printf ("\nSum of Column %d: %d", i + 1, sum);
    }
}

int princiDiagSum (int a[][10], int row, int col)
{
    int i, sum;
    for (i = sum = 0; i < row; sum += a[i][i], i++)
        printf ("%d ", a[i][i]);
    return sum;
}

int secondDiagSum (int a[][10], int row, int col)
{
    int i, j, sum;
    for (i = sum = 0, j = col - 1; i < row; sum += a[i][j], i++, j--)
        printf ("%d ", a[i][j]);
    return sum;
}

int main()
{
    int row, col, sum;
    printf("Enter number of rows");
    scanf ("%d", &row);
    printf ("\nEnter number of columns: ");
    scanf ("%d", &col);
    if (row > 0 && col > 0 && col <= 10)
    {
        int a[row][col];
        read (a, row, col);
        display (a, row, col);
        sum = eleSum (a, row, col);
        printf ("\n\nSum of all elements: %d", sum);
        rowSum(a, row, col);
        colSum(a, row, col);
        if (row == col)
        {
            printf ("\nPrincipal Diagonal Elements: ");
            sum = princiDiagSum(a, row, col);
            printf ("\nSum of principal diagonal elements: %d\nSecondary Diagonal Elements: ", sum);
            sum = secondDiagSum(a, row, col);
            printf ("\nSum of secondary diagonal elements: %d\n", sum);
        }
        else
            printf ("\nNot a square matrix\n");
    }
    else
        printf ("\nInvalid input\n");
    return 0;
}
