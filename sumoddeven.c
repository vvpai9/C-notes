#include<stdio.h>
main()
{
    int n1,n2;
    void evenodd_sum(int n1, int n2);

    printf("Values of n1 and n2 are");
    scanf("%d%d",&n1,&n2);

    evenodd_sum(n1,n2);
}

void evenodd_sum(int n1,int n2)
{
    int c, esum=0, osum=0;
    for(c=n1;c<=n2;c++)
    {
        if(c%2==0)
            esum=esum+c;
        else
            osum=osum+c;
    }
    printf("Sum of even numbers=%d and sum of even numbers=%d\n",esum,osum);
}

/*
#include<stdio.h>
main()
{
    int n1,n2;
    void sum_odd(int n1,int n2);
    void sum_even(int n1, int n2);

    printf("enter the value of n1 and n2\n");
    scanf("%d%d",&n1,&n2);

    sum_odd(n1,n2);
    sum_even(n1,n2);
}

    void sum_odd(int n1, int n2)
    {
        int sum=0,c;
        for(c=n1;c<=n2;c++)
        {
            if(c%2==1)
                sum=sum+c;
        }
        printf("sum of odd numbers=%d",sum);
    }

    void sum_even(int n1, int n2)
    {
        int sum=0,c;
        for(c=n1;c<=n2;c++)
        {
            if (c%2==0)
                sum=sum+c;
        }
        printf("sum of even numbers= %d",sum);
    }
*/
