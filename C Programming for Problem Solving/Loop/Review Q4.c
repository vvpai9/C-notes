#include <stdio.h>

int days (int n)
{
    int i, in, count, out;
    for (i = 1, count = 0; i <= n; i++)
    {
        printf ("\nEnter login time (Military Time: HHMM) of employee for day %d: ", i);
        scanf ("%d", &in);
        printf ("\nEnter logout time (Military Time: HHMM)of employee for day %d: ", i);
        scanf ("%d", &out);
        if ((out - in) < 800 )
            count ++;
    }
    return count;
}

int main ()
{
    int n;
    printf ("Enter number of days: ");
    scanf ("%d", &n);
    printf ("\nNumber of days the employee has worked less than 8 hours: %d\n", days (n));
    return 0;
}
