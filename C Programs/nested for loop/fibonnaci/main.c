#include <stdio.h>

void series (int n)
{
    int f1, f2, f3, i;
    for (f1 = -1, f2 = 1, i = 1; i <= n; i++)
    {
        f3 = f1 + f2;
        printf ("%d ", f3);
        f1 = f2;
        f2 = f3;
    }
}

int main()
{
    int n;
    scanf ("%d", &n);
    series (n);
    return 0;
}
