//modular c program to read a number and print the reversed number
#include<stdio.h>
main()
{
    int num;
    void reverse(int num);
    printf("Enter the number\n");
    scanf("%d",&num);
    reverse(num);
}

void reverse(int num)
{
    int sum;
    printf("The reversed number is\n");
    while(num!=0)
    {
        sum=num%10;
        num=num/10;
        printf("%d",sum);
    }
}
