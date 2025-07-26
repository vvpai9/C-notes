#include <stdio.h>

int main ()
{
    int a, b;
    printf ("Enter an integer: ");
    scanf ("%d", &a);
    printf ("Enter another integer: ");
    scanf ("%d", &b);
    a > b ? printf ("\n%d is the largest\n", a) : printf ("\n%d is the largest\n", b);
    return 0;
}