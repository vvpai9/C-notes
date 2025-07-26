#include <stdio.h>

struct complex
{
    int real, img;
};

int main()
{
    struct complex a, b, c;
    printf("This program multiplies two input complex numbers.\n\nFor a complex number a + bi, enter \'a\' and \'b\' values:\n");
    scanf("%d%d", &a.real, &a.img);
    printf ("\nFor another complex number c + di, enter \'c\' and \'d\' values:\n");
    scanf("%d%d", &b.real, &b.img);
    c.real = (a.real * b.real) - (a.img * b.img);
    c.img = (a.img * b.real) + (a.real * b.img);
    printf ("\nProduct of %d + %di and %d + %di is %d + %di\n", a.real, a.img, b.real, b.img, c.real, c.img);
    return 0;
}
