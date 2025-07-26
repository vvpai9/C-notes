#include<stdio.h>
main()
{
    float discamt, cost, netamt;
    printf("The ex-showroom cost of the car:");
    scanf("%f",&cost);

    if(cost>0 && cost<=400000)
    {
        discamt=5000;
    }
    else if(cost>400000 && cost<=600000)
    {
        discamt=(5000+5.0/100*(cost-400000));
    }
    else if(cost>600000 && cost<=700000)
    {
        discamt= (10000+7.0/100*(cost-600000));
    }
    else if(cost<700000 && cost<=900000)
    {
        discamt= (20000+9.0/100*(cost-700000));
    }
    else if(cost>900000)
     {
         discamt= (30000 + 10.0/100*(cost-900000));
     }
    else
    {
        printf("Invalid purchase cost");
    }

    netamt= (cost-discamt)*1.12;

    if(cost>0)
    {
        printf("Discount= %f and Net cost= %f\n",discamt,netamt);
    }
}
