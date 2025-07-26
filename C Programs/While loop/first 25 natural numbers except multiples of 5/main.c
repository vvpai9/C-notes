#include <stdio.h>

int main()
{
    int i = 1;
    while (i < 25)
    {
        if (i % 5 == 0)
        {
            i ++;
        }
        printf ("%d\n", i);
        i ++;
    }
    return 0;
}
