#include <stdio.h>

int main()
{
    float d1, d2, area;
    char shape;
    printf("Enter shape to find area (R: Rectangle; C: Circle; T: Triangle; S: Square): ");
    shape = getchar ();
    switch (shape)
    {
        case 'r' :
        case 'R' : printf ("\nEnter a side length: ");
                    scanf ("%f", &d1);
                    printf ("Enter another side length: ");
                    scanf ("%f", &d2);
                    area = d1 * d2;
                    printf ("\nArea of rectangle with sides of length %f and %f is %f\n", d1, d2, area);
                    break;
        case 't' :
        case 'T' : printf ("\nEnter base of triangle: ");
                    scanf ("%f", &d1);
                    printf ("Enter height of triangle: ");
                    scanf ("%f", &d2);
                    area = 0.5 * d1 * d2;
                    printf ("\nArea of triangle with base %f and height %f is %f\n", d1, d2, area);
                    break;
        case 'c' :
        case 'C' : printf ("\nEnter radius of circle: ");
                    scanf ("%f", &d1);
                    area = 3.14159 * d1 * d1;
                    printf ("\nArea of circle with radius %f is %f\n", d1, area);
                    break;
        case 's' :
        case 'S' : printf ("\nEnter side length of square: ");
                    scanf ("%f", &d1);
                    area = d1 * d1;
                    printf ("\nArea of square with side length %f is %f\n", d1, area);
                    break;
        default : printf ("\nInvalid shape\n");

    }
    return 0;
}
