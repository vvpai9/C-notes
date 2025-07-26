#include <stdio.h>
#include <stdlib.h>

struct emp
{
    int sal, gross;
    float exp;
};

int main()
{
    struct emp *e;
    e = malloc (sizeof (struct emp));
    printf("Enter experience of employee: ");
    scanf ("%f", &e -> exp);
    if (e -> exp >= 1)
    {
        printf ("\nEnter basic salary of the employee: ");
        scanf ("%d", &e -> sal);
        e -> gross = (e -> sal * 0.2) + e -> sal + (0.15 * e -> sal);
        printf ("\nGross salary of the employee: %d\n", e -> gross);
    }
    else
        printf ("\nInvalid input\n");
    free (e);
    return 0;
}
