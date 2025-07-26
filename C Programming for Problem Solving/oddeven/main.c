#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf ("%d", &n);
    switch (n)
    {
        case 0 : printf ("\nZero\n");
                break;

        default : switch (n > 0)
                {
                    case 1 : printf ("\n%d is positive\n", n);
                            break;

                    case 0 : printf ("\n%d is negative\n", n);
                            break;
                }
    }
    return 0;
}
