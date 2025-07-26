//write a modular c program to read an array to display the array elements and calculate the sum of all array elements
#include<stdio.h>
int c;
void read(int a[50],int n);
void display(int a[50],int n);
void sum_array(int a[50],int n);
void avg_array(int a[50],int n);
void compare(int a[50],int n);
void minimum(int a[50],int n);

int main()
{
    int n;
    int a[50];
    printf("Enter number of students in the class\n");
    scanf("%d",&n);


    read(a,n);
    display(a,n);
    sum_array(a,n);
    avg_array(a,n);
    compare(a,n);
    minimum(a,n);
}

void read(int a[50],int n)
{
    for(c=0;c<n;c++)
    {
        printf("Enter the marks\n");
        scanf("%d",&a[c]);
    }
}

void display(int a[50], int n)
{
    printf("\n");
    for(c = 0; c < n; c++)
        printf("%d\n", a[c]);
}

void sum_array(int a[50],int n)
{
    int sum=0;
    for(c=0;c<n;c++)
    {
        sum=sum+a[c];
    }
    printf("total sum of marks scored= %d\n",sum);
}

void avg_array(int a[50],int n)
{
    int sum=0,avg;
    for(c=0;c<n;c++)
    {
        sum=sum+a[c];
    }
    avg=sum/n;
    printf("Avg marks= %d\n",avg);
}

void compare(int a[50],int n)
{
    int max;
    max=a[0];
    for(c=1;c<n;c++)
    {
        if(a[c]>max)
            max=a[c];
    }
    printf("maximum marks= %d\n",max);
}

void minimum(int a[50],int n)
{
    int min;
    min=a[0];
    for(c=1;c<n;c++)
    {
        if(a[c]<min)
            min=a[c];
    }
    printf("minimum marks= %d\n",min);
}
