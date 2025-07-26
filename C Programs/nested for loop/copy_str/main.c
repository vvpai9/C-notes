#include <stdio.h>

void copy_str(char str[], int n)
{
    char copy[n];
    int i;
    for (i = 0; i < n; i++)
    {
        copy[i] = str[i];
    }
    printf ("Copied string: %s", copy);
}

int main()
{
    char str[1000];
    int i;
    gets (str);
    for (i = 0; str[i] != '\0'; i++);
    copy_str(str, i);
    return 0;
}
