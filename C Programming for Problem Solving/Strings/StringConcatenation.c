#include <stdio.h>

void concat (char str1[], char str2[])
{
    int i, j;
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; str1[i] = str2[j], i++, j++);
    str1[i] = '\0';
}

int main ()
{
    char str1[20], str2[20];
    printf ("Enter strings: ");
    gets (str1);
    gets(str2);
    concat(str1, str2);
    printf ("\nString concatenated: ");
    puts (str1);
    return 0;
}