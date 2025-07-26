#include <stdio.h>

int main()
{
    float fuel, rate, distance, amount, mileage;
    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter mileage: ");
    scanf("%f", &mileage);
    printf("Enter price of petrol: ");
    scanf("%f", &rate);
    fuel = amount / rate;
    distance = fuel * mileage;
    printf("\nDistance travelled by car: %f km\n", distance);
    return 0;
}
