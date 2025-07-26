#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter an integer: ");
    scanf ("%d", &a);
    printf("Enter another integer: ");
    scanf ("%d", &b);
    printf("Enter another integer: ");
    scanf ("%d", &c);
    switch (a > b && a > c)
    {
        case 1 : printf ("\n%d is the largest\n", a); break;
        default : switch (b > c)
                {
                    case 1 : printf ("\n%d is the largest\n", b); break;
                    default : printf ("\n%d is the largest\n", c);
                }
    }
    return 0;
}
