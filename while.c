#include<stdio.h>
main()
{
    int n;
    void natural(int n);
    printf("enter the value of n\n");
    scanf("%d",&n);
    natural(n);
}

void natural(int n)
{
    int c=1;
    while(c<=n)
    {
        printf("%d\t",c);
        c++;
    }
}
