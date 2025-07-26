#include <stdio.h>

void copy (char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0'; str2[i] = str1[i], i++);
    str2[i] = '\0';
}

int main ()
{
    char str1[20], str2[20];
    printf ("Enter string: ");
    gets (str1);
    copy(str1, str2);
    printf ("\nString copied: ");
    puts (str2);
    return 0;
}
