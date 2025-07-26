#include <stdio.h>
#include <string.h>

int main ()
{
    char name[10], nme[10];
    gets (name);
    gets(nme);
    printf ("%d", strlen(name));
    return 0;
}
