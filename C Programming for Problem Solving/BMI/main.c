#include <stdio.h>
#include <math.h>

int main()
{
    float weight, height, BMI;
    printf("Enter weight in kgs: ");
    scanf ("%f", &weight);
    printf("Enter height in metres: ");
    scanf ("%f", &height);
    BMI = weight / pow (height, 2);
    printf ("\nBMI = %f kgs per metre\n", BMI);
    return 0;
}
