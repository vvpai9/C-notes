#include <stdio.h>
main()
{
    int marks;
    printf("enter your Marks \n");
    scanf("%d",&marks);
    switch(marks)
    {
        case 0 ... 39:printf("F\n");break;
        case 40 ... 59:printf("E\n");break;
        case 60 ... 79:printf("A\n");break;
        case 80 ... 100:printf("S\n");break;
        default:printf("Invalid marks\n");
    }
}

/*
        'A'= marks>0 && marks<=39
        'B'= marks>=40 && marks<=59
        'C'= marks>=60 && marks<=79
        'D'= marks>=80 && marks<=100
*/
