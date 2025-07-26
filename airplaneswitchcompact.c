#include<stdio.h>
int main()
{
    float time_1,time_2,disc,int_fare,d_fare;
    char class_H_B, class_B_G;
    int print_cost = 1; // Flag to determine whether to print the cost or not
    printf("Welcome to the flight booking system\n");
    printf("---------Time-Info---------\n");
    printf("When did you book your Hubli to Banglore flight(in days)?\n> ");
    scanf("%f",&time_1);

    printf("When did you book your Banglore to Germany flight(in days)?\n> ");
    scanf("%f",&time_2);
    printf("-----------Fare calculation (Hubli to Banglore)-------------\n");
    printf("For economy - Type D\n    premium economy - Type P\n    Business - Type B\n    First class - Type F\n");

    printf("Which class would you like traveling from Hubli to Banglore?\n> ");
    scanf(" %c",&class_H_B);
    if(time_1>=30)
    {
        switch(class_H_B)
        {
            case 'D':d_fare=3724;break;
            case 'P':d_fare=4410;break;
            case 'B':d_fare=5684;break;
            case 'F':d_fare=6860;break;
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
    printf("-----------Fare calculation (Bangalore to Germany)-------------\n");
    printf("Which class would you like traveling from Banglore to Germany?\n> ");
    scanf(" %c",&class_B_G);

    if(time_2>=30)
    {
        switch(class_B_G)
        {
            case 'D':int_fare=24108;break;
            case 'P':int_fare=26925.5;break;
            case 'B':int_fare=29988;break;
            case 'F':int_fare=33173;break;
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
        printf("-----------------Total fare-----------------\n");
        printf("It would cost you %f\n",int_fare);
        printf("Total fare=%f\n",d_fare+int_fare);
    }
}
