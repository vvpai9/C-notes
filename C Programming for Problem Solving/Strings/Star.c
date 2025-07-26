#include <stdio.h>

int count (char str[])
{
    int i;
    for (i = 0; str[i] != '*' || str[i] != '\0'; i++);
    return i;
}

int main ()
{
    char str[20];
    int c;
    printf ("Enter string: ");
    gets (str);
    c = count (str);
    printf ("\nCount: %d", c);
    return 0;
}