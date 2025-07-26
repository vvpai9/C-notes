#include <stdio.h>

float amt (int pur)
{
    float disc, net = disc = 0;
    if (pur >= 0 && pur <= 400000)
        disc = 5000;
    else if (pur > 400000 && pur <= 600000)
        disc = 5000 + 0.05 * (pur - 400000);
    else if (pur > 600000 && pur <= 700000)
        disc = 10000 + 0.07 * (pur - 600000);
    else if (pur > 700000 && pur <= 900000)

        disc = 20000 + 0.09 * (pur - 700000);
    else
        disc = 30000 + 0.1 * (pur - 900000);
    net = (pur - disc) + (0.12 * (pur - disc));
    printf ("\nDiscount: Rs. %f\n", disc);
    return net;
}

int main()
{
    int pur;
    float net;
    printf("Enter purchase amount: ");
    scanf ("%d", &pur);
    net = amt (pur);
    printf ("\nNet payable amount: Rs. %f\n", net);
    return 0;
}
