#include <stdio.h>

int main()
{
    float unit, amt = 0;
    printf("Enter number of units consumed by the customer: ");
    scanf ("%f", &unit);
    if (unit >= 0 && unit <= 200)
        amt = 0.5 * unit;
    else if (unit > 200 && unit <= 400)
        amt = 0.5 * unit;
    else if (unit > 400 && unit <= 600)
        amt = 230 + (0.8 * (unit - 400));
    else if (amt > 600)
        amt = 390 + (unit - 600);
    else
        printf ("\nInvalid input\n");
    printf ("\nTotal bill amount payable by the customer: Rs. %f\n", amt);
    return 0;
}
