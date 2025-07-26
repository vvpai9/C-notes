//modular c program to check if the number is Harshall number or not
#include<stdio.h>
main()
{
    int num;
    void harshal(int num);
    printf("enter the number\n");
    scanf("%d",&num);
    harshal(num);
}

void harshal(int num)
{
    int sum=0,t_sum=0,x=num;

    while(num!=0)
    {
        sum=num%10;
        t_sum=t_sum+sum;
        num=num/10;
    }
    if(x%t_sum==0)
    printf("The number is a Harshal number\n");
    else
    printf("The number is not a Harshal number\n");
}
