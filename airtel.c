#include<stdio.h>
main()
{
    float time,bill;
    printf("Input the number of minutes\n");
    scanf("%f",&time);

    if(time>0 && time<=100)
    {
        bill= 200;
    }
    else if(time>100 && time<=150)
    {
        bill= 200+(time-100.0)*0.60;
    }
    else if(time>150 && time<=200)
    {
        bill= 230+(time-150.0)*0.50;
    }
    else if(time>200)
    {
        bill= 255+(time-200.0)*0.40;
    }
    else
    {
        printf("Invalid time");
    }
    if(time>0)
    {
        printf("Bill you have to pay is %f",bill);
    }
}
