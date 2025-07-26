#include<stdio.h>
main()
{
    int n1,n2;
    void display(int n1, int n2);
    printf("Enter the values of N1 and N2\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    display(n1,n2);
}

void display(int n1, int n2)
{
    int c;
    if(n1<=n2)
    for(c=n1;c<=n2;c++)
    {
        printf("%d\t",c);
    }
    else if(n1>=n2)
    for(c=n2;c<=n1;c++)
    {
        printf("%d\t",c);
    }
    else
        printf("invalid input\n");
}

// no return because we can only return 1 value
