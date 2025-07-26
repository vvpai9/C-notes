#include <stdio.h>

int main()
{
    char ch;
    float amt = 0, qty;
    printf("\nB -> Badam Milk\nC -> Chocolate Milk\nS -> Strawberry Milk\nM -> Mango\n\nEnter your choice: ");
    ch = getchar ();
    if (ch == 'B' || ch == 'b' || ch == 'C' || ch == 'c' || ch == 'S' || ch == 's' || ch == 'm' || ch == 'M')
    {
        printf ("\nEnter quantity of milk: ");
        scanf ("%f", &qty);
    }
    switch (ch)
    {
        case 'b' :

        case 'B' : amt = 25 * qty;
                    break;

        case 'c' :

        case 'C' : amt = 30 * qty;
                    break;

        case 's' :

        case 'S' : amt = 50 * qty;
                    break;

        case 'm' :

        case 'M' : amt = 45 * qty;
                    break;

        default : printf ("\nInvalid input\n");
    }
    printf ("\nAmount: %f\n", amt);
    return 0;
}
