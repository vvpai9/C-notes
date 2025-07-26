#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements of the array\n");
    scanf("%d",&n);

    void read(int a[50],int n);
    void display(int a[50],int n);

    int a[50];
    read(a,n);
    display(a,n);
}

void read(int a[50],int n)
{
    for(int c=0;c<n;c++)
    {
        printf("Enter the array element\n");
        scanf("%d",&a[c]);
    }
}

void display(int a[50], int n)
{
    int c;
    for(c = 0; c < n; c++)
        printf("%d\n", a[c]);
}
