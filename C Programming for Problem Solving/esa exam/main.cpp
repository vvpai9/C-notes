#include <iostream>

#include <stdio.h>
int binary(int n);
int main()
{
    int n,message;
    printf("enter the message\n");
    scanf("%d",&n);
    message=binary(n);
    printf("message obtained=%d",message);


}
int binary(int n)
{
    int i;
    int sum=0;
    int result,message;
    for(i=5;i<n,i++)
    {
        sum=sum+i;
        if((pow(2,n)==sum)
        {
            result=message;
        }
    }
}


