#include <stdio.h>

int n = 12, i;

void read (int exp[])
{
    printf ("\nEnter expenditure for each month: ");
    for (i = 0; i < n; i++)
        scanf ("%d", &exp[i]);
}

void compute (int exp[])
{
    int tot = 0;
    float avg;
    for (i = 0; i < n; i++)
        tot = tot + exp[i];
    avg = tot / (float) n;
    printf ("\nTotal expenditure: Rs. %d\nAverage expenditure: Rs. %f\n", tot, avg);
}

int main()
{
    int exp[n];
    read (exp);
    compute (exp);
    return 0;
}
