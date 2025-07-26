#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *a;
    a = (float *) calloc (sizeof (float), 4);
    do
    {
        printf ("\n1 -> Add\n2 -> Subtract\n3 -> Multiply\n4 -> Divide\n0 -> Exit\n\nEnter choice: ");
        scanf ("%f", (a + 3));
        if ((int) *(a + 3) != 0 && (int) *(a + 3) > 0 && (int) *(a + 3) < 5)
        {
            printf ("Enter two numbers: ");
            scanf ("%f %f", a, a + 1);
        }
        switch ((int) *(a + 3))
        {
            case 1 : *(a + 2) = *a + *(a + 1);
                        break;

            case 2 : *(a + 2) = *a - *(a + 1);
                        break;

            case 3 : *(a + 2) = *a * *(a + 1);
                        break;

            case 4 : *(a + 2) = *a / *(a + 1);
                        break;

            case 0 : break;

            default: printf ("\nInvalid Choice\nExecution failed\n");
        }
        if ((int) *(a + 3) != 0 && (int) *(a + 3) > 0 && (int) *(a + 3) < 5)
        {
            if ((*(a + 2) - (int) *(a + 2)) != 0)
                printf ("\nResult: %f\n", *(a + 2));
            else
                printf ("\nResult: %d\n", (int) *(a + 2));
        }
    }while (*(a + 3) != 0);
    free (a);
    printf ("\nExecution terminated\n");
    return 0;
}
