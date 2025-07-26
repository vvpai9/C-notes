#include<stdio.h>
main()
{
    int num;
    void prime(int num);
    printf("Enter the number you want to check if prime\n");-
    scanf("%d",&num);
    if(num>0)
        prime(num);
    else
        printf("Invalid number");
}

void prime(int num)
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
        printf("the number is composite");
    else
        printf("the number is prime");
}
