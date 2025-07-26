#include<stdio.h>
main()
{
    float a,b,s,t,d;
    void apple(float a, float s, float t, float d);
    void orange(float b, float s, float t, float d);
    printf("enter apple tree,house's starting co-ordinate and house's ending co-ordinate\n");
    scanf("%f%f%f",&a,&s,&t);
    printf("enter the distance of apple tree\n");
    scanf("%f",&d);
    apple(a,s,t,d);
    printf("enter orange tree,house's starting and ending co-ordinate\n");
    scanf("%f%f%f",&b,&s,&t);
    printf("enter the distance of orange\n");
    scanf("%f",&d);
    orange(b,s,t,d);
}

void apple(float a, float s, float t, float d)
{
    if(s<=a+d && t>=a+d)
        printf("Apple will fall on Ram's house\n");
    else
        printf("Apple will not fall on Ram's house\n");
}

void orange(float b, float s, float t, float d)
{
    if(s<=b+d && t>=b+d)
        printf("Orange will fall on Ram's house\n");
    else
        printf("Orange will not fall on Ram's house\n");
}
