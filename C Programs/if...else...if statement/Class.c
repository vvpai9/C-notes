#include <stdio.h>

int main ()
{
    int rn, sub1, sub2, sub3;
    float per;
    printf ("Enter your roll number: ");
    scanf ("%d", &rn);
    printf ("Enter marks in subject 1: ");
    scanf ("%d", &sub1);
    printf ("Enter marks in subject 2: ");
    scanf ("%d", &sub2);
    printf ("Enter marks in subject 3: ");
    scanf ("%d", &sub3);
    per = (sub1 + sub2 + sub3) / 3.0;
    printf ("\nPercentage: %f", per);
    if (per >= 75)
    {
        printf ("\nDistinction\n");
    }
    else if (per >= 60)
        {
            printf ("\nFirst Class\n");
        }
        else if (per >= 50)
            {
                printf ("\nSecond Class\n");
            }
            else if (per >= 35)
                {
                    printf ("\nThird Class\n");
                }
                else
                {
                    printf ("\nFail\n");
                }
    return 0;
}
