#include <stdio.h>

void read (int a[][10], int row, int col)
{
	int i, j;
	printf ("\nEnter %d elements: \n", row * col);
	for  (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			scanf ("%d", &a[i][j]);
	}
}

int largest (int sum[], int row)
{
    int i, l;
    for (l = 0, i = 1; i < row; i++)
    {
        if (sum[i] > sum[l])
            l = i;
    }
    return l;
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

void rowSum (int a[][10], int row, int col)
{
    int i, j, sum, s[row], l;
    for (i = 0; i < row; i++)
    {
        for (j = sum = 0; j < col; sum += a[i][j], j++);
        s[i] = sum;
    }
    l = largest (s, row);
    printf("\nThe area with maximum number of houses is: %d\n", l);
}

int main()
{
    int row, col;
    printf("\nEnter number of rows: ");
    scanf ("%d", &row);
    printf("\nEnter number of columns: ");
    scanf ("%d", &col);
    if (row > 0 && col > 0 && col <= 10)
    {
        int a[row][col];
        read (a, row, col);
        display(a, row, col);
        rowSum (a, row, col);
    }
    else
        printf ("\nInvalid input\n");
    return 0;
}
