#include <stdio.h>

int main()
{
    int day;
    printf("Enter a day number (1-7): ");
    scanf ("%d", &day);
    switch (day)
    {
        case 1 : printf ("\nSunday\n"); break;
        case 2 : printf ("\nMonday\n"); break;
        case 3 : printf ("\nTuesday\n"); break;
        case 4 : printf ("\nWednesday\n"); break;
        case 5 : printf ("\nThursday\n"); break;
        case 6 : printf ("\nFriday\n"); break;
        case 7 : printf ("\nSaturday\n"); break;
        default : printf ("\nInvalid day number\n");
    }
    return 0;
}
