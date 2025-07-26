#include <stdio.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    c = getchar ();
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        switch (c)
        {
            case 'a' :

            case 'A' :

            case 'e' :

            case 'E' :

            case 'i' :

            case 'I' :

            case 'o' :

            case 'O' :

            case 'u' :

            case 'U' : printf ("\n%c is a vowel\n", c);
                        break;

            default : printf ("\n%c is a consonant\n", c);
        }
    }
    else
        printf ("\n%c is not an alphabet\n", c);
    return 0;
}
