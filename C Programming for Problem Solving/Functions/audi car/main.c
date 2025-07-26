//Audi Car Problem
#include <stdio.h>

float dist (float, float, float);       //Function Declaration

int main()
{
    float rate, distance, amount, mileage;
    printf("Enter amount, mileage and rate of petrol: ");
    scanf("%f%f%f", &amount, &mileage, &rate);
    distance = dist (amount, mileage, rate);        //Function Call
    printf ("\nDistance travelled by car : %f kms\n", distance);
    return 0;
}

float dist (float amt, float mile, float rate)      //Function Definition
{
    float distn;
    distn = (amt / rate) * mile;
    return distn;
}


