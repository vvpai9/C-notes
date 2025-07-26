#include<stdio.h>

void fibonacci(int n);

int is_prime(int num);

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    fibonacci(n);
}

int is_prime(int num)
{
    int c=1;
    if(num<=1)
    {
        return 0;
    }

    for(c=2;c<=num/2;c++)
    {
        if (num%c==0)
        {
            return 0;
        }
    }
}

void fibonacci(int n)
{
    int f1=1,f2=1,f3=2,c=1;

    if(n==1)
        printf("No prime number");
    else if(n==2)
        printf("No prime number");
    else if(n==3)
        printf("No prime number");
    while(c<=n-3)
    {
        f3 = f2 + f1;
        if(is_prime(f3))
        {
            printf("%d\t", f3);
        }
        f1 = f2;
        f2 = f3;
        c++;
    }
}
