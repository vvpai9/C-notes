#include <stdio.h>

void read(int arr[], int n)
{
    int i;
    printf("\nEnter integers:\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &arr[i]);
    }
}

void prime(int arr[], int n)
{
    int i, j, count;
    for (i = 0; i < n; i++)
    {
        count = 0;
        if (arr[i] == 0 || arr[i] == 1)
        {
           count = 1;
        }
        else
        {
            for (j = 2; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0)
                {
                    count = 1;
                    break;
                }
            }
        }
        if (count == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int n;
    printf ("Enter number of integers: ");
    scanf ("%d", &n);
    int arr[n];
    read (arr, n);
    printf ("\nPrime elements: ");
    prime (arr, n);
    printf ("\n");
    return 0;
}
