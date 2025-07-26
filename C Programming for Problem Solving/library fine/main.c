#include <stdio.h>

int main()
{
    char lib;
    int days = 0;
    float fine = -1;
    printf("C -> Central Library\nM -> Main Library\n\nEnter library: ");
    lib = getchar ();
    fflush (stdin);
    if (lib == 'M' || lib == 'm' || lib == 'C' || lib == 'c')
    {
        printf ("\nEnter number of days book is returned late: ");
        scanf ("%d", &days);
    }
    switch (lib)
    {
        case 'c' :

        case 'C' : if (days >= 0 && days <= 5)
                        fine = 0.5 * days;
                    else if (days > 5 && days <= 10)
                        fine = days;
                    else if (days > 10 && days <= 15)
                        fine = 5 * days;
                    else
                        printf ("\nYour membership is cancelled\n");
                    break;

        case 'm' :

        case 'M' : if (days >= 0 && days <= 5)
                        fine = days;
                    else if (days > 5 && days <= 10)
                        fine = 2 * days;
                    else if (days > 10 && days <= 15)
                        fine = 10 * days;
                    else
                        printf ("\nYou cannot borrow book anymore\n");
                    break;

        default : printf ("\nInvalid library\n");
    }
    if (fine >= 0)
        printf ("\nFine amount: Rs. %f\n", fine);
    return 0;
}
