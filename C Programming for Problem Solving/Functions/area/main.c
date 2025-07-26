//Area of rectangle and circle
#include <stdio.h>

void area (float, float, float);        //Function Declaration

int main()
{
    float l, w, r;
    printf("Enter length and width of rectangle and radius of circle: ");
    scanf ("%f%f%f", &l, &w, &r);
    area (l, w, r);     //Function Call
    return 0;
}

void area (float l, float w, float r)       //Function Definition
{
    float rect, cir;
    rect = l * w;
    cir = 3.142 * r * r;
    printf ("\nArea of circle: %f\nArea of rectangle: %f\n", cir, rect);
    return;
}
