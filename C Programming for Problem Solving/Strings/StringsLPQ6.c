#include <stdio.h>

void extract (char str[], int pos, int n)
{
    int i;
    if (!n)
    {
        for (i = pos; str[i] != '\0'; i++)
            printf ("%c", str[i]);
    }
    else
    {
        for (i = pos; i < (pos + n) && str[i] != '\0'; i++)
            printf ("%c", str[i]);
    }
}

int main ()
{
    char str[100];
    int pos, n;
    gets(str);
    scanf ("%d %d", &pos, &n);
    extract (str, pos, n);
    return 0;
}