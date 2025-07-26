#include <stdio.h>

int palindrome (char str[])
{
    int i, j;
    for (i = 0; str[i] + '\0'; i++);
    for (j = i - 1, i = 0; i < j; i++, j--)
    {
        if (str[i] != str[j])
            return 0;
    }
    return 1;
}

int choice(char str[])
{
    if (palindrome (str))
        printf ("\nThe word is selcted by Ramesh.");
    else
        printf ("\nThe word is selected by Suresh.");
}

int main ()
{
    char word[20];
    gets (word);
    choice (word);
    return 0;
}