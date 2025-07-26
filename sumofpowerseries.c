//sum of first n series of 1/n
#include<stdio.h>
main()
{
    int n;
    float sum;
    float sumofn(int n);
    printf("enter the number of terms\n");
    scanf("%d",&n);
    sum=sumofn(n);
    printf("The sum of given numbers is %f",sum);
}

float sumofn(int n)
{
    int c;
    float total;
    for(c=1;c<=n;c++)
    {
        total=total+1.0/c;
    }
    return(total);
}
