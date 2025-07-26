#include<stdio.h>
main()
{
int unit;
float bill;
printf("Enter the volume of units consumed\n");
scanf("%d",&unit);

if(unit>0 && unit<=100)
{
bill=50;
}

else if(unit>100 && unit<=200)
{
bill= 50+(unit-100)*1.5;
}

else if(unit>200 && unit<=350)
{
bill= 200+(unit-200)*2.0;
}

else if(unit>350 && unit<=500)
{
bill= 500+(unit-350)*2.5;
}

else if(unit>500)
{
bill= 875+(unit-500)*3.0;
}

else
{
printf("Invlid units consumed");
}

if(unit>=0)
{
printf("Bill=%f",bill);
}
}
