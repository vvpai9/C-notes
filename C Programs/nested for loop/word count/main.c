#include <stdio.h>

int main()
{
    int i, word, alpha, num, sp, space;
    char sent[1000];
    printf("Enter a sentence: ");
    gets (sent);
    for (i = 0, word = 1, alpha = num = sp = space = 0; sent[i] !='\0'; i++)
    {
        if (sent[i] == 32 && sent[i + 1] != 32)
        {
            space++;
            word++;
        }
        else if ((sent[i] >= 'A' && sent[i] <= 'Z')|| (sent[i] >= 'a' && sent[i] <= 'z'))
            {
                alpha++;
            }
            else if (sent[i] >= '0' && sent[i] <= '9')
                {
                    num++;
                }
                else
                {
                    sp++;
                }
    }
    if (sent[0] == 32)
    {
        word--;
    }
    printf ("\nTotal word count: %d\nTotal alphabet count: %d\nTotal digit count: %d\nTotal space count: %d\nTotal special character count: %d\n", word, alpha, num, space, sp);
    return 0;
}
