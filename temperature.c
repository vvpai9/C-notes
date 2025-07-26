//Write a modular c program to read the temperature of Hubli over the last x days, calculate the average temperature, display temperature days wise,
//display second highest and second lowest temperature over x days.

#include<stdio.h>
int c;
void read(int a[50],int n);
void display(int a[50],int n);
void avg_array(int a[50],int n);
void maximum(int a[50],int n);
void minimum(int a[50],int n);

int main()
{
    int n;
    int a[50];
    printf("Enter the number of days you have the temperature of\n");
    scanf("%d",&n);


    read(a,n);
    display(a,n);
    avg_array(a,n);
    maximum(a,n);
    minimum(a,n);
}

void read(int a[50],int n)
{
    for(c=0;c<n;c++)
    {
        printf("Enter the temperature\n");
        scanf("%d",&a[c]);
    }
}

void display(int a[50], int n)
{
    printf("\n");

    for(c=0;c<n;c++)
        printf("on %d, the temperature was %d\n",c+1,a[c]);
}

void avg_array(int a[50],int n)
{
    int sum=0,avg;
    for(c=0;c<n;c++)
        sum=sum+a[c];
    avg=sum/n;
    printf("Avg temperature= %d\n",avg);
}

void maximum(int a[50],int n)
{
    int max=a[0],second_max=a[0];

    for(c=1;c<n;c++)
    {
        if(a[c]>max)
        {
            second_max=max;
            max=a[c];
        }
        else if (a[c]<second_max && a[c]!=max)
        {
            second_max = a[c];
        }
    }

    printf("Second maximum temperature= %d\n",second_max);
}

void minimum(int a[50], int n)
{
    int min = a[0], second_min = a[0];
    for(c = 1; c < n; c++)
    {
        if(a[c] < min)
        {
            second_min = min;
            min = a[c];
        }
        else if (a[c] < second_min && a[c] != min)
        {
            second_min = a[c];
        }
    }

    printf("Second minimum temperature= %d\n", second_min);
}
