#include<stdio.h>
int main()
{
    int n,sum1;
    int sum(int n);
    printf("Value of n:");
    scanf("%d",&n);
    sum1=sum(n);
    printf("Sum of the natural numbers= %d",sum1);
}

int sum(int n)
{
    int c=1,sum=0;
    while(c<=n)
    {
        sum=sum+c;
        c++;
    }
    return(sum);
}
