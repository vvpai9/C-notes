#include <stdio.h>

int even (int n)
{
    return !(n % 2);
}

int points (char name[])
{
    int i;
    for (i = 0; name[i] != '\0'; i++);
    return i * i;
}

void player (char name[])
{
    int p;
    p = points (name);
    if (even (p))
        printf ("\nPlayer wins\n");
    else
        printf ("\nComputer wins\n");
}

int main ()
{
    char name[20];
    printf ("Enter name: ");
    gets (name);
    player (name);
    return 0;
}