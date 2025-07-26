#include<stdio.h>
main()
{
    int n1,n2;
    void total(int n1, int n2);
    printf("enter the value of first and last natural number\n");
    scanf("%d%d",&n1,&n2);
    total(n1,n2);
}

void total(int n1, int n2)
{
    int c=n1,esum=0;
    while(c<=n2)
    {
        if(c%2==0)
            esum=esum+c;
            c++;
    }
    printf("sum of even numbers is %d\n",esum);
}
