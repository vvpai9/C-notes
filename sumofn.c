#include<stdio.h>
main()
{
    int n;
    void sum(int n);
    printf("enter the value of N\n");
    scanf("%d",&n);
    sum(n);
}

/*void sum(int n)
{
    int sum;
    sum= n*(n+1)/2.0;
    printf("%d",sum);
}
*/

void sum(int n)
{
    int sum=0, c=1;
    for(c=1;c<=n;c++)
        sum=sum+c;

    printf("%d",sum);
}
