#include<stdio.h>
main()
{
float tax,salary;
printf("Enter the salary\n");
scanf("%d",&salary);

if(salary>0 && salary<=10000)
{
tax=0;
}

else if(salary>10000 && salary<=50000)
{
tax= 3.5/100*salary;
}

else if(salary>50000 && salary<=100000)
{
tax= 5.0/100*salary;
}

else if(salary>100000)
{
tax= 6.500/100*salary;
}

else
{
printf("Invalid salary");
}

if(salary>=0)
{
printf("Tax=%f",tax);
}
}
