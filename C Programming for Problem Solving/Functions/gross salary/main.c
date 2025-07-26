#include <stdio.h>
#include <stdlib.h>

struct emp
{
    float gross, exp;
};

void g_sal (struct emp *e)
{
    e -> gross = 0;
    if (e -> exp >= 1)
    {
        if (e -> exp <= 5)
            e -> gross = (20000 * 0.2) + 20000 + (0.15 * 20000);
        else if (e -> exp <= 10)
            e -> gross = (45000 * 0.2) + 45000 + (0.15 * 45000);
        else
            e -> gross = (60000 * 0.2) + 60000 + (0.15 * 60000);
    }
    else
        printf ("\nInvalid input\n");
}

int main()
{
    struct emp *e;
    e = malloc (sizeof (struct emp));
    printf("Enter experience of employee: ");
    scanf ("%f", &e -> exp);
    g_sal (e);
    printf ("\nGross salary of the employee: %f\n", e -> gross);
    free (e);
    return 0;
}

