//modular c program to display square of all the numbers between 1 to n
#include<stdio.h>
void display(int n);
main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    display(n);
}

void display(int n)
{
    int c;
    for(c=1;c<=n;c++)
    {
        printf("%d\n",c*c);
    }
}
