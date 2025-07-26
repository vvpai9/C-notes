#include<stdio.h>

void palindrome(long long num);

int main()
{
    long long num;
    printf("Enter the number\n");
    scanf("%lld", &num);
    palindrome(num);
    return 0;
}

void palindrome(long long num)
{
    long long sum, rev = 0, x;
    x = num;

    while (num != 0)
    {
        sum = num % 10;
        rev = rev * 10 + sum;
        num = num / 10;
    }

    if (rev == x)
        printf("It is palindrome\n");
    else
        printf("It is not a palindrome\n");
}
