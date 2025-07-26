#include <stdio.h>

int prime (int n)
{
    int i, flag;
    for (i = 2, flag = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf ("%d", &n);
    if (prime(n))
        printf ("\n%d is prime\n", n);
    else
        printf ("\n%d is composite\n", n);
    return 0;
}
