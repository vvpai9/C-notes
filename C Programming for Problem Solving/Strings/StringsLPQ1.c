#include <stdio.h>

void vowels (char sent[])
{
    int i , count;
    printf ("\nVowels: ");
    for (i = count = 0; sent[i] != '\0'; i++)
    {
        switch (sent[i])
        {
            case 'A' :
            case 'a' :
            case 'E' :
            case 'e' :
            case 'O' :
            case 'o' :
            case 'I' :
            case 'i' :
            case 'U' :
            case 'u' : printf ("%c ", sent[i]);
                        count++;
        }
    }
    printf ("\nNumber of vowels: %d\n", count);
}

int main()
{
    char sent[100];
    printf ("\nEnter sentence: ");
    gets (sent);
    vowels (sent);
    return 0;
}