#include <stdio.h>

int n, i;

void read (int arr[])
{
    do
    {
        printf ("\nEnter the number of elements: ");
        scanf ("%d", &n);
        if (n <= 100)
        {
            printf ("\nEnter %d integer elements:", n);
            for (i = 0; i < n; i++)
                scanf ("%d", &arr[i]);
        }
        else
            printf ("\nInvalid size");
    }while (n > 100);
}

/*void sort (int arr[])
{
    int j, s;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1, j < n - 2)
    }
}*/

void BinarySearch (int arr[])
{
    int found = 0, key, low = 0, high = n - 1, mid;
    printf ("\nEnter key value to search: ");
    scanf ("%d", &key);
    while (low < high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            found = 1;
            break;
        }
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (found)
        printf ("\nFound %d at index %d\n", key, mid);
    else
        printf ("\n%d not found\n", key);
}

int main()
{
    int a[100];
    read (a);
    BinarySearch (a);
    return 0;
}
