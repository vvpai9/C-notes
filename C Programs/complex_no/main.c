#include <stdio.h>
#include <stdlib.h>

struct complex
{
    float real, img;
};

void read (struct complex *a)
{
    printf("Enter a complex number: ");
    scanf ("%f%f", &a -> real, &a -> img);
    printf("\nEnter another complex number: ");
    scanf ("%f%f", &(a + 1) -> real, &(a + 1) -> img);
}

void display (struct complex *a)
{
    printf ("\nSum of %f + %fi and %f + %fi is %f + %fi\n", a -> real, a -> img, (a + 1) -> real, (a + 1) -> img, (a + 2) -> real, (a + 2) -> img);
}

void sum (struct complex *a)
{
    (a + 2) -> real = (a + 1) -> real + a -> real;
    (a + 2) -> img = (a + 1) -> img + a -> img;
}
int main()
{
    struct complex *a;
    a = calloc (sizeof (struct complex), 3);
    read (a);
    sum (a);
    display (a);
    free (a);
    return 0;
}
