#include<stdio.h>
main()
{
    int n;
    void valueofpie(int n);
    printf("enter the number of iterations to be considered\n");
    scanf("%d",&n);
    valueofpie(n);
}
void valueofpie(int n)
{
    int i,j=1,sign=1;
    float s=0;
    for(i=1;i<=n;i++)
    {
        s=s+sign*1.0/j;
        j=j+2;
        sign=sign*-1;
    }
    printf("sum=%f\n",4*s);
}
