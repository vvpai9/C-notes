#include <stdio.h>
int c;
main()
{
    int a[50],n,key;
    void read(int a[50],int n);
    void display(int a[50],int n);
    void linear_search(int a[50],int n, int key);
    printf("enter number of element\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    printf("enter the key element to search\n");
    scanf("%d",&key);
    linear_search(a,n,key);
}

void read(int a[50],int n)
{
    for(c=0;c<n;c++)
    {
        printf("Enter the elemental value\n");
        scanf("%d",&a[c]);
    }
}

void display(int a[50], int n)
{
    printf("\n");

    for(c=0;c<n;c++)
        printf("on %d, the element was %d\n",c+1,a[c]);
}

void linear_search(int a[50],int n, int key)
{
    int found=0;
    for(c=0;c<=n;c++)
    {
        if(a[c]==key)
            found++;
    }

    if(found>0)
        printf("Key found %d times\n",found);
    else
        printf("Key not found\n");
}
