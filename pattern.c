#include<stdio.h>
main()
{
    int row;
    void pattern(int row);
    printf("Enter the number of rows you want to print\n");
    scanf("%d",&row);
    pattern(row);
}

void pattern(int row)
{
    int c=1,i=1,j;
    for(i=row;i>=1;i--)
    {
        for(c=i;c>=1;c--)
        {
            printf("%d\t",c);
        }
        printf("\n");
    }
}
