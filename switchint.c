#include <stdio.h>
main()
{
    int ch;
    printf("enter your choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("hi\n");break;
        case 2:printf("hello\n");break;
        case 3:printf("KLE Tech\n");break;
        case 4:printf("Hubli\n");break;
        default:printf("Invalid choice");break;
    }
}
