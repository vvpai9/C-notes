#include <stdio.h>
main()
{
    int n=12;
    void bills(int n);
    bills(n);
}
void bills(int n)
{
    float e=0,w=0,f=0,t_bill=0,t_w,t_f,t_e;
    int c=1;

    for(c=1;c<=12;c++)
    {
        printf("for month %d\n",c);
        printf("enter the electricity bill\n");
        scanf("%f",&e);

        printf("enter the water bill\n");
        scanf("%f",&w);

        printf("enter the food bill\n");
        scanf("%f",&f);

        t_bill=e+f+w+t_bill;
        t_e=e+t_e;
        t_w=w+t_w;
        t_f=f+t_f;
    }

    printf("Amount spent on electricity=%f\n",t_e);

    printf("Amount spent on food=%f\n",t_f);

    printf("Amount spent on water=%f\n",t_w);

    printf("Average amount spent on electricity=%f\n",t_e/12);

    printf("Average amount spent on food=%f\n",t_f/12);

    printf("Average amount spent on water=%f\n",t_w/12);

    if(t_e>t_w && t_e>t_f)
        printf("You have spent the most on electricity bills");

    else if(t_f>t_e && t_f>t_w)
        printf("You have spent the most on food bills");

    else if(t_w>t_e && t_e>t_f)
        printf("You have spent the most on water bills");
}
