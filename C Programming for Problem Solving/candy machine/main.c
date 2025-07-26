#include <stdio.h>

int n, i;

void read(int coin[])
{
    for (i = 0; i < n; i++)
        scanf ("%d", &coin[i]);
}

void candy (int coin[])
{
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (coin[i] == 1 || coin[i] == 5 || coin[i] == 10 || coin [i] == 20)
            sum += coin[i];
    }
    if (sum >= 25 && sum <= 34)
        printf ("\nMango Candy\n");
    else if (sum >= 35 && sum <= 49)
        printf ("\nStrawberry Candy\n");
    else if (sum >= 50 && sum <= 70)
        printf ("\nPista Candy\n");
    else
        printf ("\nNo Candy\n");
}

int main()
{
    scanf ("%d", &n);
    if (n >= 1 && n <= 100)
    {
        int coin [n];
        read (coin);
        candy (coin);
    }
    else
        printf ("\nInvalid input\n");
    return 0;
}
