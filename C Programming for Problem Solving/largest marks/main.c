#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *m;
    m = calloc (sizeof (int), 3);
    printf("Enter marks of three students: ");
    scanf ("%d %d %d", m, m + 1, m + 2);
    if (*m > *(m + 1) && *m > *(m + 2))
        printf ("\n%d is the largest\n", *m);
    else if (*(m + 1) > *m && *(m + 1) > *(m + 2))
        printf ("\n%d is the largest\n", *(m + 1));
    else
        printf ("\n%d is the largest\n", *(m + 2));
    free (m);
    return 0;
}
