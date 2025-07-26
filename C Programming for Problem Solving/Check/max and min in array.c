#include <stdio.h>

int n, i;

void read (int arr[])
{
	for (i = 0; i < n; i++)
		scanf ("%d", &arr[i]);
}

void display (int arr[])
{
	for (i = 0; i < n; i++)
		printf ("%d ", arr[i]);
}

int largest (int arr[])
{
    int l;
    for (l = arr[0], i = 1; i < n; i++)
    {
        if (arr[i] > l)
            l = arr[i];
    }
    return l;
}

int smallest (int arr[])
{
    int s;
    for (s = arr[0], i = 1; i < n; i++)
    {
        if (arr[i] < s)
            s = arr[i];
    }
    return s;
}

int main ()
{
    printf ("Enter size of array: ");
    scanf ("%d", &n);
    if (n > 0)
    {
        int arr[n];
        read (arr);
        display (arr);
        printf ("\nSmallest element in array: %d\nLargest element in array: %d\n", largest (arr), smallest (arr));
    }
    else
        printf ("\nInvalid size of array\n");
    return 0;
}
