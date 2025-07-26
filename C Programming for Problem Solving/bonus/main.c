#include <stdio.h>
#include <stdlib.h>

struct emp
{
  int exp, basic, bonus;
};

int main()
{
    struct emp *e;
    e = malloc (sizeof (struct emp));
    printf("Enter experience: ");
    scanf ("%d", &e -> exp);
    printf("Enter basic salary: ");
    scanf ("%d", &e -> basic);
    if (e -> exp <= 7)
        e -> bonus = 0.1 * e -> basic;
    else if (e -> exp > 7 && e -> exp <= 10)
        e -> bonus = 0.2 * e -> basic;
    else if (e -> exp > 10 && e -> exp <= 15)
        e -> bonus = 0.3 * e -> basic;
    else
        e -> bonus = 0.4 * e -> basic;
    printf ("\nBonus: %d\n", e -> bonus);
    free (e);
    return 0;
}
