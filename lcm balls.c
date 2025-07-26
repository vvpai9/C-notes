#include <stdio.h>

int main()
{
    int red, green, result;
    int calculate_lcm(int a, int b);

    printf("Enter the time in which the red ball will be dropped\n");
    scanf("%d", &red);

    printf("Enter the time in which the green ball will be dropped\n");
    scanf("%d", &green);

    result=calculate_lcm(red, green);

    printf("Both the balls will be thrown at the same time at %d seconds\n", result);
}

int calculate_lcm(int red, int green)
{
    int lcm, temp_red, temp_green, temp;

    temp_red=red;
    temp_green=green;

    while(temp_green!=0)
    {
        temp=temp_green;
        temp_green=temp_red%temp_green;
        temp_red=temp;
    }

    lcm=(red*green)/temp_red;

    return lcm;
}
