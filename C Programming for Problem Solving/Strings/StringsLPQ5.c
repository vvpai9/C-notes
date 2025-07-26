#include <stdio.h>

int anagram (char str1[], char str2[])
{
    int i, j, flag = 0;
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; j++);
    if (i != j)
        return 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            flag = 0;
            if (str1[i] == str2[j])
                flag = 1;
                break;
        }
        if (flag)
            break;
    }
    return flag;
}

int main ()
{
    char str1[20], str2[20];
    printf ("String1: ");
    gets(str1);
    printf ("String2: ");
    gets(str2);
    if (anagram(str1, str2))
        printf ("\nSimran is happy.");
    else
        printf ("\nSimran is sad.");
    return 0;
}