#include<stdio.h>
main()
{
    int time;
    float bill;
    printf("Input the number of minutes\n");
    scanf("%d",&time);
    if(time>0)
    {
        switch(time)
        {
            case 0 ... 100:bill= 200;break;
            case 101 ... 150:bill= 200+(time-100.0)*0.60;break;
            case 151 ... 201:bill= 230+(time-150.0)*0.50;break;
            default: bill= 255+(time-200.0)*0.40;break;
        }
        printf("Bill you have to pay is %f",bill);
    }
    else
        {
            printf("Invalid time");
        }
    }

