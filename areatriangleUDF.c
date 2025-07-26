#include <stdio.h>
float area_triangle(int a,int b,int c);
main()
{
    int a,b,c;
    float Area;
    printf("Enter the sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    Area=area_triangle(a,b,c);
    printf("area of triangle=%f\n",Area);
}

float area_triangle(int a, int b, int c)
{

int s;
float Area;
s=(a+b+c)/2.0;
Area=sqrt(s*(s-a)*(s-b)*(s-c));
return Area;
}
