//Miles to Kms
#include <stdio.h>

float km (float);       //Function Declaration

int main()
{
    float miles, kms;
    printf("Enter distance in miles: ");
    scanf ("%f", &miles);
    kms = km (miles);       //Function Call
    printf ("\n%f miles = %fkms\n", miles, kms);
    return 0;
}

float km (float miles)      //Function Definition
{
    float kms;
    kms = miles * 1.6;
    return kms;
}
