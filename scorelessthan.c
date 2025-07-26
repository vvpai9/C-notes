#include<stdio.h>
main()
{
    int n, num;
    int num_students(int n);

    printf("enter the number of students in the class\n");
    scanf("%d",&n);

    num=num_students(n);
    printf("Students who scored less than 8 marks=%d",num);
}

int num_students(int n)
{
    int c,sum=0,m;
    for(c=1;c<=n;c++)
    {
        printf("enter the marks of the student\n");
        scanf("%d",&m);
        if(m<8)
            sum=sum+1;
    }
    return(sum);
}
