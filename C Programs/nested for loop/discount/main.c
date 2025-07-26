#include <stdio.h>

int main()
{
    int n, m, disc, add_disc, r, amount;
    printf("Enter total number of books: ");
    scanf("%d", &n);
    printf("Enter number of agricultural books: ");
    scanf("%d", &m);
    printf("Enter MRP of each book: ");
    scanf("%d", &r);
    disc = (n * r) * 0.12;
    add_disc = (m * r) * 0.1;
    amount = (n * r) - disc - add_disc;
    printf ("Amount payable: %d", amount);
    return 0;
}
