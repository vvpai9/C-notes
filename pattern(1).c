#include<stdio.h>

void pattern(int row);
int sum(int row);

int main()
{
    int row;
    printf("Enter the number of rows you want to print\n");
    scanf("%d", &row);
    pattern(row);
    return 0;
}

void pattern(int row)
{
    int sum(int row);
    int c,i,sum_,counter=1;
    sum_=sum(row);

    for(i=1;i<=row;i++)
    {
        for(c=1;c<=i;c++)
        {
            printf("%d\t",counter++);
        }
        printf("\n");
    }
}

int sum(int row)
{
    int k,sum=0;
    for(k=1;k<=row;k++)
        sum=sum+k;

    return(sum);
}
