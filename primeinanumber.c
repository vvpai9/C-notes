//print all the digits that are prime numbers in a number
#include<stdio.h>
main()
{
    int num;
    void sum_n(int num);
    printf("enter the number\n");
    scanf("%d",&num);
    sum_n(num);
}

void sum_n(int num)
{
    int dig=0,c=0;
    int prime(int dig);
    printf("all the prime digits =\t");
    while(num!=0)
    {
        dig=num%10;
        num=num/10;
        if(dig>=2)
        {
            if(prime(dig))
                printf("%d\t",dig);
        }
    }
}

int prime(int num)
{
    int status=0,c=2;
    for(c=2;c<=num/2;c++)
    {
        if(num%c==0)
        {
            status=1;break;
        }
    }
    if(status==1)
        return(0);
    else
        return(1);
}
