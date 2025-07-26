#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    char o;
    printf("Enter an operation to perform (\'+\', \'-\', \'*\', \'/\', \'^\'): ");
    o = getchar ();
    printf("Enter a number: ");
    scanf ("%f", &a);
    printf("Enter another number: ");
    scanf ("%f", &b);
    switch (o)
    {
        case '+' : printf ("\n%f\n", a + b); break;
        case '-' : printf ("\n%f\n", a - b); break;
        case '*' : printf ("\n%f\n", a * b); break;
        case '/' : printf ("\n%f\n", a / b); break;
        case '^' : printf ("\n%f\n", (pow (a, b))); break;
        default : printf ("\nInvalid Operation\n");
    }
    return 0;
}
