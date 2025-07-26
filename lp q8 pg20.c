#include<stdio.h>
int sum(int coupon);
void trends(int coupon);
int main()
{
    int amt,coupon;
    printf("Enter the amount the customer has shopped for\n");
    scanf("%d",&amt);
    if(amt>2000)
    {
        printf("enter your coupon code\n");
        scanf("%d",&coupon);
        trends(coupon);
    }
    else
        printf("You have to shop for value greater than Rs 2000 to get a coupon");
}

void trends(int coupon)
{
    int c=2,status=0;

    for(c=2;c<=sum(coupon)/2;c++)
    {
        if(sum(coupon)%c==0)
        {
            status=1;
            break;
        }
    }

    if(status==0)
        printf("WINNER");

    else if(status==1)
        printf("You didn't win the lottery, better luck next time");
}

int sum(int coupon)
{
    int j=0,sum=0;
    while(coupon>0)
    {
        j=coupon%10;
        coupon=coupon/10;
        sum=sum+j;
    }
    return(sum);
}
