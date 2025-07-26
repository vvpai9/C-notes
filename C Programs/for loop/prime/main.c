#include <stdio.h>

int main()
{
    int i, fact, num;
    printf("Enter a number: ");
    scanf ("%d", &num);
    for (i = 1, fact = 1; i <= num; i++)
    {
        if (num % fact == 0)
        {
            fact++;
        }
    }
     if ((num == 0 || num == 1) || fact > 2)
    {
        printf ("\n%d is not a prime number.\n", num);
    }
    else
    {
        printf ("\n%d is a prime number.\n", num);
    }
    return 0;
}
