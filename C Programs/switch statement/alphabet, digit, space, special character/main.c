#include <stdio.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    c = getchar ();
    switch ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) )
    {
        case 1 : printf ("\n%c is an alphabet\n", c); break;
        default : switch (c >= 48 && c <= 57)
                {
                    case 1 : printf ("\n%c is a digit\n", c); break;
                    default : switch (c == 32)
                            {
                                case 1 : printf ("\n%c is a space\n", c); break;
                                default : printf ("\n%c is a special character\n", c);
                            }
                }
    }
    return 0;
}
