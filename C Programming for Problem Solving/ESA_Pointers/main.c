#include <stdio.h>
#include <stdlib.h>

void read (int *a, int n)
{
    int i;
    printf ("\nEnter the salaries of %d employees:\n", n);
    for (i = 0; i < n; i++)
        scanf ("%d", (a + i));
}

void display (int *a, int k)
{
    printf ("\n%d th smallest salary: %d\n", k, *(a + k - 1));
}

void sort (int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int n, k, *sal;
    printf("\nEnter number of employees: ");
    scanf ("%d", &n);
    if (n > 0)
    {
        sal = calloc (sizeof(int), n);
        read (sal, n);
        sort (sal, n);
        printf ("\nEnter the value of k: ");
        scanf ("%d", &k);
        if (k > 0 && k <= n)
            display (sal, k);
        else
            printf ("\nInvalid value of k\n");
        free (sal);
    }
    else
        printf ("\nInvalid value of number of employees\n");
    return 0;
}
