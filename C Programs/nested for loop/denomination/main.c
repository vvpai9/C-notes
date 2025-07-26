#include <stdio.h>

void main()
{
    int n[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1}, amount, d, i;
    printf("Enter amount: ");
    scanf("%d", &amount);
    for (i = 0; i < 10; i++)
    {
        d = amount / n[i];
        printf("\n%d * %d", n[i], d);
        amount = amount % n[i];
    }
}
