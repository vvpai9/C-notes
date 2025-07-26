#include <stdio.h>

int main()
{
    char choice;
    int sal, bonus;
    printf("Enter gender of employee: ");
    choice = getchar ();
    if (choice == 'M' || choice == 'F' || choice == 'm' || choice == 'f')
    {
        printf ("\nEnter salary of employee: ");
        scanf ("%d", &sal);
        if (choice == 'M' || choice == 'm')
            bonus = 0.05 * sal;
        else
            bonus = 0.1 * sal;
        printf ("\nBonus: %d\n", bonus);
    }
    else
        printf ("\nInvalid input\n");
    return 0;
}
