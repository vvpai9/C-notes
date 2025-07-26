#include <stdio.h>
main()
{
int a,b;
void add(int a,int b);
printf("enter the 2 numbers\n");
scanf("%d%d",&a,&b);
add(a,b);
}

void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum=%d\n",sum);
}
