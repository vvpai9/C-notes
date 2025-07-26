#include <stdio.h>

int compare (char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] > str2[i])
            return 1;
        if (str1[i] < str2[i])
            return -1;
    }
    return 0;
}

int main ()
{
    char str1[20], str2[20];
    int c;
    printf ("Enter strings: ");
    gets (str1);
    gets(str2);
    c = compare(str1, str2);
    printf ("\nString comparison result: %d", c);
    return 0;
}