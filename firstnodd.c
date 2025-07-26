// Write a modular c program to print all odd numbers in the first n natural numbers.
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

    for(c=0;c<=n;c++)
/* or
    for(c=0;c<=n;c=c+2)
    {
        printf("%d\t",c);
    }
*/
    {
        if(c%2==1) //or if(c%2!=0)
        printf("%d\n",c);
    }
}
