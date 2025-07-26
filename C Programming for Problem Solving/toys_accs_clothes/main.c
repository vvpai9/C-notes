#include <stdio.h>

int main()
{
    char ch;
    int puramt = 0;
    float net, disc = 0;
    printf("\nT -> Toys\nC -> Clothes\nA -> Accessories\n\nEnter your choice: ");
    ch = getchar ();
    if (ch == 'T' || ch == 't' || ch == 'C' || ch == 'c' || ch == 'A' || ch == 'a')
    {
        printf ("\nEnter purchase amount: ");
        scanf ("%d", &puramt);
    }
    switch (ch)
    {
        case 't' :

        case 'T' : if (puramt > 500 && puramt <= 1000)
                        disc = 0.05 * (puramt - 500);
                    else if (puramt > 1000)
                        disc = 0.07 * (puramt - 1000);
                    break;

        case 'c' :

        case 'C' : if (puramt > 1500 && puramt <= 2000)
                        disc = 0.05 * (puramt - 1500);
                    else if (puramt > 1200)
                        disc = 0.07 * (puramt - 1200);
                    break;

        case 'a' :

        case 'A' : if (puramt > 500 && puramt <= 2000)
                        disc = 0.05 * (puramt - 500);
                    else if (puramt > 2000)
                        disc = 0.07 * (puramt - 2000);
                    break;

        default : printf ("\nInvalid type of item\n");
    }
    net = puramt - disc;
    printf ("\nPayable amount: %f\n", net);
    return 0;
}
