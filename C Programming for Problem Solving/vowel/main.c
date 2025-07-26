#include <stdio.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    c = getchar ();
    if ((c >= 'A' && c <= 'Z') ||(c >= 'a' && c <= 'z'))
    {
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
            printf ("\n%c is a vowel\n", c);
        else
            printf ("\n%c is a consonant\n", c);
    }
    else
        printf ("\n%c is not an alphabet\n", c);
    return 0;
}
