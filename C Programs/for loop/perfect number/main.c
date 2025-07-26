#include <stdio.h>

int main()
{
    int i, fact, num, sum;
    printf("Enter a number: ");
    scanf ("%d", &num);
    for (i = 1, fact = 1, sum = 0; i <= num; i++)
    {
        if (num % fact == 0)
        {
            sum += fact;
            fact++;
        }
    }
    if (sum == num)
    {
        printf ("\n%d is a perfect number\n", num);
    }
    else
    {
        printf ("\n%d is not a perfect number.\n", num);
    }
    return 0;
}
