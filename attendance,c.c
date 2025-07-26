#include<stdio.h>
main()
{
    int n;
    void attendance(int n);
    printf("Enter the no of days you want to check the attendace\n");
    scanf("%d",&n);
    attendance(n);
}

void attendance(int n)
{
    int c,hours,count=0;
    for(c=1;c<=n;c++)
    {
        printf("enter no of hours worked for %d day\n",c);
        scanf("%d",&hours);
        if(hours<8)
        {
            count++;
        }
    }
    printf("no of days worked for less that 8 hours is %d\n",count);
}
