#include <stdio.h>

float *a;

int main()
{
    int choice;
    do
    {
        printf("\n1 -> Integers\n2 -> Fractions\n0 -> Exit\n\nEnter choice: ");
        scanf ("%d", &choice);
        switch (choice)
        {
            case 1 : a = (int *) malloc (sizeof (int) * 3);
                    printf ("Enter an integer: ");
                    scanf ("%f", (int) a);
                    printf ("Enter another integer: ");
                    scanf ("%f", a + 1);
                    *(a + 2) = *a + *(a + 1);
                    printf ("\nSum of %d and %d is %d\n", (int) *a, (int) *(a + 1), (int) *(a + 2));
                    break;

            case 2 : a = (float *) malloc (sizeof (float) * 3);
                    printf ("Enter a number: ");
                    scanf ("%f", a);
                    printf ("Enter another number: ");
                    scanf ("%f", a + 1);
                    *(a + 2) = *a + *(a + 1);
                    printf ("\nSum of %f and %f is %f\n", *a, *(a + 1), *(a + 2));
                    break;

            case 0 : break;

            default : printf ("Invalid choice\n");
        }
        free (a);
    }while (choice != 0);
    return 0;
}
