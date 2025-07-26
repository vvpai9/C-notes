#include <stdio.h>

int main()
{
    float s1, s2, s3, s4, s5, agg, per;
    printf("Enter marks in subject 1: ");
    scanf ("%f", &s1);
    printf("Enter marks in subject 2: ");
    scanf ("%f", &s2);
    printf("Enter marks in subject 3: ");
    scanf ("%f", &s3);
    printf("Enter marks in subject 4: ");
    scanf ("%f", &s4);
    printf("Enter marks in subject 5: ");
    scanf ("%f", &s5);
    agg = s1 + s2 + s3 + s4 + s5;
    per = agg / 5;
    printf ("\nAggregate marks: %f\nPercentage: %f\n", agg, per);
    return 0;
}
