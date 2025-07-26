#include <stdio.h>

int main()
{
    float d1, d2, area;
    char choice;
    do
    {
        printf ("Enter shape (\'C\' - Circle; \'T\' - Triangle; \'R\' - Rectangle; \'E\' - Exit): ");
        choice = getchar ();
        switch (choice)
        {
        case 'e' :
        case 'E' : printf ("Enter radius of circle: ");
                    scanf ("%f", &d1);
                    area = 3.141592 * d1 * d1;
                    printf ("\n Area of circle with radius %f is %f\n", d1, area);
                    break;

        case 'r' :
        case 'R' : printf ("Enter length of rectangle: ");
                    scanf ("%f", &d1);
                    area = 3.141592 * d1 * d1;
                    printf ("\n Area of circle with radius %f is %f\n", d1, area);
                    break;
        }
    }
    return 0;
}
