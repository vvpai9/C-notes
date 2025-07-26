/*  write a c program to calculate the sum of first n fibonacei numbers*/
#include<stdio.h>
main()
{
    int n;
    void fibonacei(int n);
    printf("enter the value of n\n");
    scanf("%d",&n);
    fibonacei(n);
}
void fibonacei(int n)
{
    int f1=0,f2=1,f3=0,c=1,sum=1;

    if(n==1)
        printf("sum is 0");

    else if(n==2)
        printf("sum is 1");

    else
        while(c<=n-2)
        {
            f3=f2+f1;
            f1=f2;
            f2=f3;
            sum=f3+sum;
            c++;
        }
        if(n>2)
            printf("sum is %d",sum);
}
