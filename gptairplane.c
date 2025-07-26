#include <stdio.h>
#include <string.h>

// Function to calculate the total fare
float calculateTotalFare(char type[], char cabinClass[], int daysBeforeTravel) {
    // Flight fare table
    float fares[2][4] = {
        {3850, 4500, 5800, 7000},  // Domestic flights
        {24600, 27475, 30600, 33850}  // International flights
    };

    // Discount percentage for booking within 30 days
    float discount = (daysBeforeTravel <= 30) ? 0.02 : 0.0;

    // Determine the type of flight (0 for Domestic, 1 for International)
    int flightType = (strcmp(type, "Domestic") == 0) ? 0 : 1;

    // Determine the cabin class
    int classIndex = -1;
    if (strcmp(cabinClass, "Economy") == 0) classIndex = 0;
    else if (strcmp(cabinClass, "Premium economy") == 0) classIndex = 1;
    else if (strcmp(cabinClass, "Business") == 0) classIndex = 2;
    else if (strcmp(cabinClass, "First class") == 0) classIndex = 3;

    // Calculate the total fare with discount
    float totalFare = fares[flightType][classIndex] - (fares[flightType][classIndex] * discount);

    return totalFare;
}

int main() {
    char type[20], cabinClass[20];
    int daysBeforeTravel;

    // Input: Flight type, Cabin class, and days before travel
    printf("Enter flight type (Domestic/International): ");
    scanf("%s", type);

    printf("Enter cabin class (Economy/Premium economy/Business/First class): ");
    scanf("%s", cabinClass);

    printf("Enter days before travel: ");
    scanf("%d", &daysBeforeTravel);

    // Calculate and display the total fare
    float totalFare = calculateTotalFare(type, cabinClass, daysBeforeTravel);
    printf("Total fare to be paid: $%.2f\n", totalFare);

    return 0;
}
