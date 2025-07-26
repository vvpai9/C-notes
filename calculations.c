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
main()
{
    float time_1,time_2,disc,t_fare,int_fare,d_fare;
    char class_H_B, class_B_G;
    printf("When did you book your Hubli to Banglore flight(in days)?\n");
    scanf("%f",&time_1);
    printf("When did you book your Banglore to Germany flight(in days)?\n");
    scanf("%f",&time_2);
    printf("Which class would you like traveling from Hubli to Banglore?\n");
    scanf("%c",&class_H_B);
    printf("Which class would you like traveling from Banglore to Germany?\n",&class_B_G);
    scanf("%c",&class_B_G);

    if(time_1>=30)
    {
        switch(class_H_B)
        {
            case 'Domestic Economy':{
                                        d_fare=(3800)*0.98;
                                        printf("it would cost you %f\n",d_fare);break;
                                    }
            case 'Domestic Premium Economy': {
                                        d_fare=(4500)*0.98;
                                        printf("it would cost you %f\n",d_fare);break;
                                    }
            case 'Domestic Business':        {
                                        d_fare=(5800)*0.98;
                                        printf("it would cost you %f\n",d_fare);break;
                                    }
            case 'Domestic First class':     {
                                        d_fare=(7000)*0.98;
                                        printf("it would cost you %f\n",d_fare);break;
                                    }
            default:
                {
                    printf("The only existing classes are Economy, Premium Economy, Business and First class\n");break;
                }
        }
    }
    else if(time_1<30)
        {
        switch(class_H_B)
        {
            case 'Domestic Economy':         {
                                        d_fare=(3800);
                                        printf("it would cost you %f\n",d_fare);break;
                                    }
            case 'Domestic Premium Economy': {
                                        d_fare=(4500);
                                        printf("it would cost you %f\n",d_fare);break;
                                    }
            case 'Domestic Business':        {
                                        d_fare=(5800);
                                        printf("it would cost you %f\n",d_fare);break;
                                    }
            case 'Domestic First class':     {
                                        d_fare=(7000);
                                        printf("it would cost you %f\n");break;
                                    }
            default:
                {
                    printf("The only existing classes are Economy, Premium Economy, Business and First class\n");break;
                }
        }
    }
    if(time_2>=30)
    {
        switch(class_B_G)
        {
            case 'Economy':         {
                                        int_fare=(24600)*0.98;
                                        printf("it would cost you %f\n",int_fare);break;
                                    }
            case 'Premium Economy': {
                                        int_fare=(27475)*0.98;
                                        printf("it would cost you %f\n",int_fare);break;
                                    }
            case 'Business':        {
                                        int_fare=(30600)*0.98;
                                        printf("it would cost you %f\n",int_fare);break;
                                    }
            case 'First class':     {
                                        int_fare=(33850)*0.98;
                                        printf("it would cost you %f\n",int_fare);break;
                                    }
            default:
                {
                    printf("The only existing classes are Economy, Premium Economy, Business and First class\n");break;
                }
        }
        else if(time_2<30)
    {
        switch(class_B_G)
        {
            case 'Economy':         {
                                        int_fare=(24600);
                                        printf("it would cost you %f\n",int_fare);break;
                                    }
            case 'Premium Economy': {
                                        int_fare=(27475);
                                        printf("it would cost you %f\n",int_fare);break;
                                    }
            case 'Business':        {
                                        int_fare=(30600);
                                        printf("it would cost you %f\n",int_fare);break;
                                    }
            case 'First class':     {
                                        int_fare=(33850);
                                        printf("it would cost you %f\n",int_fare);break;
                                    }
            default:
                {
                    printf("The only existing classes are Economy, Premium Economy, Business and First class\n");break;
                }
        }
    }
    t_fare= d_fare+int_fare;
    printf("t_fare=%f\n",t_fare);
}
