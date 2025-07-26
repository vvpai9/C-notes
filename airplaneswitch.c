/* Air India has several national and international flights and each flight has 4 cabin classes for passengers. The classes
are economy, premium economy, business, and first class. Passengers are traveling from Hubli to Banglore in Domestic flights.
The flight fares are given below in the table. The total fare depends on the type and cabin class the passener selects. Write
a C program to compute the total fare to be paid by the passenger.

Type of flight      Cabin class
Domestic flight     Economy         3850
                    Premium economy 4500
                    business        5800
                    first class     7000

International       Economy         24600
flight              Premium economy 27475
                    business        30600
                    first class     33850

If the flight is booked by the passenger within 30 days before the travel to destination, then 2% discount is
applicable to all classes.*/

#include<stdio.h>
int main()
{
    float time_1,time_2,disc,t_fare,int_fare,d_fare;
    char class_H_B, class_B_G;
    int print_cost = 1; // Flag to determine whether to print the cost or not

    printf("When did you book your Hubli to Banglore flight(in days)?\n");
    scanf("%f",&time_1);

    printf("When did you book your Banglore to Germany flight(in days)?\n");
    scanf("%f",&time_2);

    printf("For economy type D, premium economy type P, Business type B and for First class type F\n");
    printf("Which class would you like traveling from Hubli to Banglore?\n");
    scanf(" %c",&class_H_B);

    if(time_1>=30)
    {
        switch(class_H_B)
        {
            case 'D':d_fare=(3800)*0.98;break;
            case 'P':d_fare=(4500)*0.98;break;
            case 'B':d_fare=(5800)*0.98;break;
            case 'F':d_fare=(7000)*0.98;break;
            default:
                {
                printf("The only existing classes are Economy(D), Premium Economy(P), Business(B) and First class(F)\n");
                print_cost = 0; // Set the flag to not print the cost
                }
                break;
        }
    }
    else if(time_1<30)
    {
        switch(class_H_B)
        {
            case 'D':d_fare=(3800);break;
            case 'P':d_fare=(4500);break;
            case 'B':d_fare=(5800);break;
            case 'F':d_fare=(7000);break;
            default:{
                    printf("The only existing classes are Economy(D), Premium Economy(P), Business(B) and First class(F)\n");break;
                    print_cost = 0; // Set the flag to not print the cost
                    }
                    break;
        }
    }
    if (print_cost) {
        printf("it would cost you %f\n", d_fare);
    }

    printf("Which class would you like traveling from Banglore to Germany?\n");
    scanf(" %c",&class_B_G);

    if(time_2>=30)
    {
        switch(class_B_G)
        {
            case 'D':int_fare=(24600)*0.98;break;
            case 'P':int_fare=(27475)*0.98;break;
            case 'B':int_fare=(30600)*0.98;break;
            case 'F':int_fare=(33850)*0.98;break;
            default:{
                    printf("The only existing classes are Economy(D), Premium Economy(P), Business(B) and First class(F)\n");
                    print_cost = 0; // Set the flag to not print the cost
                    }
                    break;
        }
    }
        else if(time_2<30)
    {
        switch(class_B_G)
        {
            case 'D':int_fare=(24600);break;
            case 'P':int_fare=(27475);break;
            case 'B':int_fare=(30600);break;
            case 'F':int_fare=(33850);break;
            default:{
                    printf("The only existing classes are Economy(D), Premium Economy(P), Business(B) and First class(F)\n");
                    print_cost = 0; // Set the flag to not print the cost
                    }
                    break;
        }
    }
    if(print_cost)
    {
        printf("it would cost you %f\n",int_fare);
        t_fare= d_fare+int_fare;
        printf("total fare=%f\n",t_fare);
    }
}
