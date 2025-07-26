/*#include<stdio.h>
main()
{
    int N, price;
    float tp;
    printf("enter no of box to be purchased and purchase amount");
    scanf("%d%d",&N,&price);
    float Amount(int Price,int N)
    {
        if(price<100)
        printf("Invalid price\n");

        else if(price>=100 && price<=200)
            tp=price;

        else if(price>=201 && price<=500)
            tp=200+(price-200)*0.85;

        else if(price>=501 && price<=800)
            tp=455+(price-500)*0.75;

        else if(price>=800)
            tp=680+(price-800)*0.7;

        else
            printf("Invalid amount");
    }

    if(price>0)
        printf("total amount to be paid=%f",N*tp);
}
*/

#include<stdio.h>
#include<stdlib.h>

float Amount(int price,int N);

main()
{
    int N,price;
    float tp;
    printf("enter number of box to be purchased and purchase amount\n");
    scanf("%d%d",&N,&price);
    tp=Amount(price, N);
    if(price>0)
    printf("total amount to be paid=%f",N*tp);
}

float Amount(int price,int N)
{
    float tp;
    if(price<100)
    printf("Invalid price\n");

    else if(price>=100 && price<=200)
    {
        tp=price;
    }

    else if(price>=201 && price<=500)
    {
        tp=200+(price-200)*0.85;
    }
    else if(price>=501 && price<=800)
    {
        tp=455+(price-500)*0.75;
    }
    else if(price>=800)
    {
        tp=680+(price-800)*0.7;
    }
    else
    {
        printf("Invalid amount");
    }
    return tp;
}
