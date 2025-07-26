#include <stdio.h>

void count (char str[])
{
    int alpha, digit, sp, i;
    for (i = alpha = digit = sp = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            sp++;
    }
    printf ("\nCount:\nAlphabets: %d\nDigits: %d\nSpecial Characters: %d\n", alpha, digit, sp);
}

int main ()
{
    char sent[100];
    printf ("\nEnter a sentence: ");
    gets(sent);
    count (sent);
    return 0;
}