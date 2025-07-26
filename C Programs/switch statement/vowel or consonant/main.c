#include <stdio.h>

int main()
{
    char a;
    printf("Enter an alphabet: ");
    a = getchar ();
    switch ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) )
    {
        case 1 : switch (a)
                {
                    case 'A' :
                    case 'a' :
                    case 'E' :
                    case 'e' :
                    case 'I' :
                    case 'i' :
                    case 'O' :
                    case 'o' :
                    case 'U' :
                    case 'u' : printf ("\n%c is a vowel\n", a); break;
                    default : printf ("\n%c is a consonant\n", a);
                }
                break;
        default : printf ("\n%c is not an alphabet\n", a);
    }
    return 0;
}
