#include <stdio.h>
#include <stdlib.h>

void swap (int *a)
{
    int temp;
    temp = *a;
    *a = *(a + 1);
    *(a + 1) = temp;
}

int main()
{
    int *a;
    a = calloc (sizeof (int), 2);
    printf("Enter two numbers: ");
    scanf ("%d%d", a, a + 1);
    swap (a);
    printf ("Swapped Numbers:\n%d\n%d", *a, *(a + 1));
    free (a);
    return 0;
}
