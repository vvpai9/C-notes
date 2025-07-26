//Grass Cutting Problem
#include <stdio.h>

float compute_time (float, float, float);       //Function Declaration

int main()
{
    float r, l, w, time;
    printf("Enter radius of hut, length and width of lawn: ");
    scanf ("%f%f%f", &r, &l, &w);
    time = compute_time (l, w, r);      //Function Call
    printf ("\nTime taken to cut grass: %f\n", time);
    return 0;
}

float compute_time (float l, float w, float r)      //Function Definition
{
    float time;
    time = ((l * w) - (3.141592 * r * r) / 2.0);
    return time;
}
