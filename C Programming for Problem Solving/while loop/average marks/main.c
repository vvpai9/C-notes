#include <stdio.h>

float Avg (int n)
{
    int i = 1;
    float sum = 0, marks, avg = 0;
    while  (i <= n)
    {
        printf ("\nEnter marks of student with roll no. %d: ", i);
        scanf ("%f", &marks);
        sum = sum + marks;
        i++;
    }
    avg = sum / n;
    return avg;
}

int main()
{
    int n;
    float avg;
    do
    {
        printf("\nEnter number of students: ");
        scanf ("%d", &n);
        if (n <= 0)
            printf ("\nInvalid input\n");
        else
        {
            avg = Avg (n);
            printf ("\nAverage marks: %f\n", avg);
        }
    }while (n <= 0);
    return 0;
}
