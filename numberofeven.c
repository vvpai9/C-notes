//Write a modular c program to read a roll number of the student and check ow many digits are even numbers
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
    int sum=0,c=0;

    while(num!=0)
    {
        sum=num%10;
        if(sum%2==0)
        c++;
        num=num/10;
    }
    printf("total number of even numbers= %d\n",c);
}
