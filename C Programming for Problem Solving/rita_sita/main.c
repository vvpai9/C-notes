#include <stdio.h>

int main()
{
    char rita[100], sita[100];
    int i, j, count = 1;
    gets (rita);
    gets (sita);
    for (i = 0; rita[i] != '\0'; i++);
    for (j = 0; sita[j] != '\0'; j++);
    if (i == j)
    {
        for (i = 0; rita[i] != '\0'; i++)
        {
            rita[i] = tolower();
            sita[i] = tolower();
            for (j = 0; sita[j] != '\0'; j++)
            {
                if (rita[i] == sita [j])
                    count = 0;
            }
            if (count == 1)
                break;
        }
    }
    if (count == 1)
        printf ("\nNO\n");
    else
        printf ("\nYES\n");
    return 0;
}
