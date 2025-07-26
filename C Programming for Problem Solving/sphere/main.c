#include <stdio.h>
#include <math.h>

int main()
{
    float r, area, volume;
    printf("Enter radius of sphere: ");
    scanf ("%f", &r);
    area = 4 * 3.141593 * pow (r, 2);
    volume = 4 / 3.0 * 3.141593 * pow (r, 3);
    printf ("\nSurface Area of Sphere: %f\nVolume of Sphere: %f\n", area, volume);
    return 0;
}
