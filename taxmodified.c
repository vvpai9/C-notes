/*every employee in India has to pay tax to the central government based on his annual income. The tax slab is given below.
Apply psf and write a c program to read the annual salary of an employee and calculate the tax the employee has to pay.*/

#include<stdio.h>
main()
{
float tax,salary;
printf("Enter the salary\n");
scanf("%f",&salary);

if(salary>0 && salary<=10000)
{
tax=0;
}

else if(salary>10000 && salary<=50000)
{
tax= 3.5/100*(salary-10000);
}

else if(salary>50000 && salary<=100000)
{
tax= 5.0/100*(salary-50000)+1400;
}

else if(salary>100000)
{
tax= 6.500/100*(salary-100000)+3900;
}

else
{
printf("Invalid salary");
}

if(salary>0)
{
printf("Tax=%f",tax);
}
}
