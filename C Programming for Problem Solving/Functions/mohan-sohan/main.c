//Mohan Sohan Problem
#include <stdio.h>
#include <math.h>

void compute (float, float, float, float, float);       //Function Declaration

int main()
{
    float x_mohan, y_mohan, x_sohan, y_sohan, speed;
    printf("Enter co-ordinates of Mohan: ");
    scanf ("%f%f", &x_mohan, &y_mohan);
    printf("Enter co-ordinates of Sohan: ");
    scanf ("%f%f", &x_sohan, &y_sohan);
    printf ("Enter speed: ");
    scanf("%f", &speed);
    compute (x_mohan, y_mohan, x_sohan, y_sohan, speed);        //Function Call
    return 0;
}

void compute (float x_m, float y_m, float x_s, float y_s, float speed)      //Function Definition
{
    float time, dist;
    time = (sqrt (pow((x_m - x_s), 2) + pow((y_s - y_m), 2))) / speed;
    dist = time * speed;
    printf ("\nDistance = %f\nTime taken = %f\n", dist, time);
    return;
}
