#include <stdio.h>

void convert(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <='z')
            str[i] = str[i] - 32;
    }
}

int main ()
{
    char sent[100];
    printf ("\nEnter sentence: ");
    gets (sent);
    convert (sent);
    puts(sent);
    return 0;
}