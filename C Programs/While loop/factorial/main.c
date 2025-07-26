#include <stdio.h>

int main()
{
    int i, n;
    unsigned long long int fact = 1;
    printf("Enter number to find factorial of: ");
    scanf ("%d", &n);
    i = n;
    while (n > 0)
    {
        fact *= n;
        n --;
    }
    printf ("\n%d! = %llu\n", i, fact);
    return 0;
}
