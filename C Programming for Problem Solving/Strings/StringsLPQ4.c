#include <stdio.h>

void ascii (char code[])
{
    int i;
    for (i = 0; code[i] != '\0'; i++)
        printf ("%d ", code[i]);
}

int main ()
{
    char code[100];
    gets(code);
    ascii(code);
    return 0;
}