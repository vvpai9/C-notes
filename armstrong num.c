//write a modular c program to read a number and check whether number is Armstrong number or not
#include <stdio.h>
#include <math.h>
main()
{
    int num;
    void armstrong(int num);
    printf("enter the number\n");
    scanf("%d",&num);
    armstrong(num);
}

void armstrong(int num)
{
    int c=num,sum=0,dig=0;

    while(num!=0)
    {
        dig=num%10;
        sum=sum+pow(dig,3);
        num=num/10;
    }
    if(sum==c)
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");
}
