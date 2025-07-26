#include <stdio.h>

int main()
{
    char *c;
    c = (char *) malloc (sizeof (char));
    printf("Enter a character: ");
    *c = getchar();
    if (*c >= 'A' && *c <= 'Z')
    {
        printf ("\n%c is an uppercase alphabet\n", *c);
    }
    else if (*c >= 'a' && *c <= 'z')
        {
            printf ("\n%c is a lowercase alphabet\n", *c);
        }
        else if (*c >= '0' && *c <= '9')
            {
                printf ("\n%c is a digit\n", *c);
            }
            else if (*c == 32)
                {
                    printf ("\n%c is a space\n", *c);
                }
                else
                {
                    printf ("\n%c is a special character\n", *c);
                }
    free (c);
    return 0;
}
