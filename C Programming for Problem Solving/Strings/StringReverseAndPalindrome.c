#include <stdio.h>

void reverse (char str[])
{
    int i, j;
    char temp;
    for (i = 0; str[i] != '\0'; i++);
    for (j = i - 1, i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void copy (char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0'; str2[i] = str1[i], i++);
    str2[i] = '\0';
}

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

int palindrome (char str1[], char str2[])
{
    if (compare(str1, str2))
        return 0;
    return 1;
}

int main ()
{
    char str[20], temp[20];
    printf ("Enter string: ");
    gets (str);
    copy (str, temp);
    printf ("\nString before reversing: ");
    puts (str);
    reverse (str);
    printf ("\nString after reversing: ");
    puts (str);
    if (palindrome(str, temp))
        printf ("\nString is palindrome\n");
    else
        printf ("\nString is not a palindrome\n");
    return 0;
}