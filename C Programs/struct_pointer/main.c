#include <stdio.h>
#include <stdlib.h>

struct complex
{
    float real, img;
};

int main()
{
    struct complex *p;
    p = calloc (sizeof (struct complex), 3);
    scanf ("%f%f", &p->real, &p->img);
    scanf ("%f%f", &(p+1)->real, &(p+1)->img);
    (p + 2)-> real = p->real + (p + 1) -> real;
    (p + 2)-> img = p->img + (p + 1) -> img;
    printf ("%f + i%f", (p+2) -> real, (p+2) -> img);
    return 0;
}
