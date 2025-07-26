#include <stdio.h>
main()
{
    char ch;
    printf("enter your choice \n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':printf("hi\n");break;
        case 'B':printf("hello\n");break;
        case 'C':printf("KLE Tech\n");break;
        case 'D':printf("Hubli\n");break;
        default:printf("Invalid choice");break;
    }
}
