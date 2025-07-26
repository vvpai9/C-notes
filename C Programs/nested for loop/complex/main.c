#include <stdio.h>

struct complex
{
    int real, img;
};

int main()
{
    struct complex a, b, c;
    printf("Enter real parts of two complex numbers:\n");
    scanf ("%d%d", &a.real, &b.real);
    printf("\nEnter imaginary parts of two complex numbers:\n");
    scanf ("%d%d", &a.img, &b.img);
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    printf ("\nSum of %d + %di and %d + %di is %d + %di\n", a.real, a.img, b.real, b.img, c.real, c.img);
    return 0;
}
