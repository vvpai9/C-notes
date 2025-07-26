#include<stdio.h>

void fibonacci(int n);

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    fibonacci(n);
}

void fibonacci(int n)
{
    int f1=1,f2=1,f3=2,c=1,status=0;

    if(n==1)
        printf("No prime number");
    else if(n==2)
        printf("No prime number");
    else if(n==3)
        printf("No prime number");
    else if(n>3)
    {
        while(c<=n-3)
        {
            f3=f2+f1;
            for(c=2;c<=f3/2;c++)
            {
                if (f3%c==0)
                {
                    status=1;
                    break;
                }
            }
            if(status==0)
            {
                printf("%d\t", f3);
            }
            f1 = f2;
            f2 = f3;
            c++;
            status=0;
        }
    }
}
