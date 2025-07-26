#include<stdio.h>
main()
{
    int n,num;
    int num_students(int n);
    printf("enter the number of students in the class\n");
    scanf("%d",&n);
    num=num_students(n);
    printf("students who scored less than 8 = %d",num);
}
int num_students(int n)
{
    int c=1,num=0,m;

    while(c<=n)
    {
        printf("enter the marks scored by the student\n");
        scanf("%d",&m);
        if(m<=8)
            num=num+1;
            c++;
    }
    return(num);
}
