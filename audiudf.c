#include <stdio.h>
main()
{
    float cptr;
    void dist(float cptr);
    printf("enter the cost of 1 liter of petrol\n");
    scanf("%f",&cptr);
    dist(cptr);
}

void dist(float cptr)
{
    float d,pltr;
    pltr=1066.64/cptr;
    d=14*pltr;
    printf("distance traveled by car=%f\n",d);
}
