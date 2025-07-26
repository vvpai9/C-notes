#include<stdio.h>
int main()
{
    int n;
    void display(int n);
    printf("Enter the number of times you want it to be printed\n");
    scanf("%d",&n);
    display(n);
}

void display(int n)
{
    int c;
    for(c=1;c<=n;c++)
    {
        printf("welcome to KLE Tech\n");
    }
    printf("%d\n",c);
}
