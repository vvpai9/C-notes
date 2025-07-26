#include<stdio.h>
main()
{
    int n;
    float avg;
    float avgm(int n);
    printf("enter the number of students in the class\n");
    scanf("%d",&n);
    avg=avgm(n);
    printf("average marks of the class=%f\n",avg);
}

float avgm(int n)
{
    int c=1,total_marks=0,m;
    float a;
    while(c<=n)
    {
        printf("enter the marks of student of roll number %d\n",c);
        scanf("%d",&m);
        total_marks=total_marks+m;
        c++;
    }
    a=(float)total_marks/n;
    return(a);
}
