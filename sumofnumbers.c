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
    int sum=0,t_sum=0;

    while(num!=0)
    {
        sum=num%10;
        t_sum=t_sum+sum;
        num=num/10;
    }
    printf("The sum of number= %d\n",t_sum);
}
