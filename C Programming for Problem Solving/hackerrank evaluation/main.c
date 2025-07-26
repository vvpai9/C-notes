#include <stdio.h>

void read (int raid[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf ("%d", &raid[i]);
}

void bestPlayers (int raid[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (raid[j] < raid[j + 1])
            {
                temp = raid[j];
                raid[j] = raid[j + 1];
                raid[j + 1] = temp;
            }
        }
    }
    printf ("Top 7 best players with highest raid points:\n");
    for (i = 0; i < 7; i++)
        printf ("%d ", raid[i]);
}

int main()
{
    int n;
    scanf ("%d", &n);
    if (n > 0)
    {
        int raid[n];
        read(raid, n);
        bestPlayers(raid, n);
    }
    else
        printf ("Invalid Input");
    return 0;
}
