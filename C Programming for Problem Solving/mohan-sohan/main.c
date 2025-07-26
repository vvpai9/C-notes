#include <stdio.h>
#include <math.h>

struct coordinate
{
    float x, y;
};

int main()
{
    struct coordinate mohan, sohan;
    float speed, time, distance;
    printf("Enter co-ordinates of Mohan: ");
    scanf ("%f%f", &mohan.x, &mohan.y);
    printf("Enter co-ordinates of Sohan: ");
    scanf ("%f%f", &sohan.x, &sohan.y);
    printf ("Enter speed: ");
    scanf("%f", &speed);
    distance = sqrt (pow((mohan.x - sohan.x), 2) + pow((sohan.y - mohan.y), 2));
    time = distance / speed;
    printf ("\nDistance = %f\nTime taken = %f\n", distance, time);
    return 0;
}
