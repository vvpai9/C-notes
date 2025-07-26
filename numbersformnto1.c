#include<stdio.h>
int main()
{
    int n;
    void display(int n);
    printf("Enter the value of N\n");
    scanf("%d",&n);
    display(n);
}

void display(int n)
{
    int c;

    for(c=n;c>=1;c--)
    {
        printf("%d\t",c);
    }
}
