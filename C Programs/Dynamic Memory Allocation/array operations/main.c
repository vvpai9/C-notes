#include <stdio.h>
#include <stdlib.h>

void read (int n, int *a)
{
    int i;
    printf ("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf ("%d", a + i);
    }
    printf ("\nElements stored successfully\n");
}

void display (int n, int *a)
{
    int i;
    printf ("Entered integer elements:\n");
    for (i = 0; i < n; i++)
    {
        printf ("%d\n", *(a + i));
    }
}

int append (int n, int *a)
{
    int m, i;
    printf ("Enter number of new elements: ");
    scanf ("%d", &m);
    a = (int *) realloc (a, sizeof (int) * m);
    printf ("Enter %d integer elements:\n", m);
    for (i = n; i < n + m; i++)
    {
        scanf ("%d", a + i);
    }
    n = n + m;
    printf ("\nAppended successfully\n");
    display (n, a);
    return n;
}

int insert (int n, int *a, int p)
{
    int i;
    a = (int *) realloc (a, sizeof (int));
    for (i = n + 1; i >= p; i--)
    {
        *(a + i) = *(a + i - 1);
    }
    printf ("Enter new integer element: ");
    scanf ("%d", a + p);
    n = n + 1;
    printf ("\nElement inserted successfully\n");
    display (n, a);
    return n;
}

int delete_ele (int n, int *a, int p)
{
    int i;
    printf ("Pass 1\n");
    for (i = p; i < n; i++)
    {
        *(a + i) = *(a + i + 1);
    }
    printf ("Pass 2\n");
    free ((a + n - 1));//a = realloc (a, sizeof (int) * (n - 1));
    printf ("Pass 3\n");
    n = n - 1;
    printf ("Pass 4\n");
    printf ("\nElement deleted successfully\n");
    printf ("Pass 5\n");
    display (n, a);
    printf ("Pass 6\n");
    return n;
}

void sort (int n, int *a)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
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
    printf ("\nSorting successful\n");
    display (n, a);
}

void search (int n, int *a)
{
    int val, i, find = 0;
    printf ("Enter element to be searched: ");
    scanf ("%d", &val);
    for (i = 0; i < n; i++)
    {
        if (*(a + i) == val)
        {
            find = 1;
            break;
        }
    }
    if (find == 1)
    {
        printf ("\nSearch successful\nFound element %d at index %d\n", val, i);
    }
    else
    {
        printf ("\nElement %d not found\n", val);
    }
}

int main()
{
    int n, p, choice, *a;
    printf ("\nEnter number of elements: ");
    scanf ("%d", &n);
    a = (int *) calloc (sizeof (int), n);
    read (n, a);
    do
    {
        printf ("\n1 -> Append elements\n2 -> Insert an element\n3 -> Delete an element\n4 -> Search for an element\n5 -> Sort all elements in ascending order\n6 -> Display all elements\n0 -> Exit\n\nEnter your choice: ");
        scanf ("%d", &choice);
        switch (choice)
        {

            case 1: n = append (n, a);
                    break;

            case 2: printf ("Enter the index number where the new element has to be inserted: ");
                    scanf ("%d", &p);
                    if (p < 0 || p > n)
                    {
                        printf ("\nInvalid index\nInsertion failed\n");
                        break;
                    }
                    n = insert (n, a, p);
                    break;

            case 3: printf ("Enter the index number of element that has to be deleted: ");
                    scanf ("%d", &p);
                    if (p < 0 || p >= n)
                    {
                        printf ("\nInvalid index\nDeletion failed\n");
                        break;
                    }
                    n = delete_ele (n, a, p);
                    break;

            case 4: search (n, a);
                    break;

            case 5: sort (n, a);
                    break;

            case 6: display (n, a);
                    break;

            case 0: break;

            default: printf ("\nInvalid choice\n");
        }
    }while (choice != 0);
    free(a);
    return 0;
}
