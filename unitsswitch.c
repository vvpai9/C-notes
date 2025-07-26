#include<stdio.h>
main()
{
int unit;
float bill;
printf("Enter the volume of units consumed\n");
scanf("%d",&unit);

if (unit>0)
{
switch(unit)
{
    case 0 ... 100: {bill=50; printf("%f is the bill",bill);} break;
    case 101 ... 200:{bill= 50+(unit-100.0)*1.5;} printf("%f is the bill",bill); break;
    case 201 ... 350:{bill= 200+(unit-200.0)*2.0;} printf("%f is the bill",bill); break;
    case 351 ... 500:{bill= 500+(unit-350.0)*2.5;} printf("%f is the bill",bill); break;
    default: {bill= 875+(unit-500.0)*3.0;} printf("%f is the bill",bill); break;
}
}
else
{
    printf("Invalid amount of units consumed");
}
}

/*
#include <stdio.h>
main()
{
int unit;
float bill;
printf("Enter the units consumed:
scanf("%d", &unit);
switch (unit)
{
case 0 ... 100:bill = 50;break;
case 101 ... 200:bill = 50 + (unit - 100)*1.5;break;
case 201 ... 350•.bill = 200 + (unit - 200)*2.0;break;
case 351 ... 500:bill = 200 + 300 + (unit-350)*2.5;break;
default:
    if (unit < 0)
    {
        printf("lnvalid units consumed\n");
    }
    else
    {
        bill = 500 + 375 + (unit - 500)*3.0;
    }
if (unit >= 0)
printf("Total bill = %f\n", bill);
}
}
*/
