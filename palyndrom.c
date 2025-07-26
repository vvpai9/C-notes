//Write a modular c program to check whether palindrome or not, print appropriate message

#include<stdio.h>
main()
{
    int num;
    void palindrome(int num);
    printf("Enter the number\n");
    scanf("%d",&num);
    palindrome(num);
}

void palindrome(int num)
{
    int sum,rev=0,x;
    x=num;
    while(num!=0)
    {
        sum=num%10;
        rev=rev*10+sum;
        num=num/10;
    }
    if(rev==x)
    {
        printf("it is palindrome\n");
    }
    else
        printf("It is not a palindrome\n");
}
