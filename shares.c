#include<stdio.h>
main()
{
    int n_shares;
    void profit(int n_shares);

    printf("Number of shares bought by Mr.Ramesh\n");
    scanf("%d",&n_shares);

    profit(n_shares);

}

void profit(int n_shares)
{
    float amount,c_value,t_amount=0,profit=0,t_profit=0;
    int c=1;
    for(c=1;c<=n_shares;c++)
    {
        printf("Amount invested in the %d share is\n",c);
        scanf("%f",&amount);

        printf("Current value of the share is:");
        scanf("%f",&c_value);

        profit= c_value-amount;

        if(profit>=0)
            printf("The profit gained by Mr.Ramesh by selling the share is %f\n",profit);
        else if(profit<0)
            printf("The loss of Mr.Ramesh by selling the shares is %f\n",profit);

        t_profit= t_profit + profit;
        t_amount=t_amount+amount;
    }
    printf("total amount invested by Mr.Ramesh is %f",t_amount);
    printf("total profit or loss gained is %f percent",t_profit*100/t_amount);
}
