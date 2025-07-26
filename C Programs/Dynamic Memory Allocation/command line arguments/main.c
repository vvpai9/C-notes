#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc !=2)
    {
        printf("\nInvalid number of arguments\n");
        exit(0);
    }
    int n, i, l, *a;
    n = (int) *(argv + 1);
    a = calloc (sizeof (int), n);
    printf ("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf ("%d", a + i);
    l = *a;
    for (i = 1; i < n; i++)
    {
        if (*(a + i) > l)
            l = *(a + i);
    }
    printf ("\nLargest element: %d\n", l);
    free (a);
    return 0;
}
