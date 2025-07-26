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
    int f1=0,f2=1,f3,c;
    printf("The fibonacei numbers are \n");
    if(n==1)
        printf("0\n");
    else if(n==2)
        printf("0\t 1\n");
    else if(n>2)
    {
        printf("0\t 1\t");
        f1=0;
        f2=1;

        for(c=1;c<=n-2;c++)
        {
            f3=f1+f2;

            printf("%d\t",f3);
            f1=f2;
            f2=f3;
        }
    }
}
