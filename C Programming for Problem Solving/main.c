#include <stdio.h>

// Function to calculate the moment of coplanar non-concurrent forces and couples about a point
double calculateMoment(double forceMagnitude, double distance) {
    // Calculate the moment using the formula M = F * d
    return forceMagnitude * distance;
}

void getDefinition() {
    char choice;

    do {
        // Ask the user for the specific definition they need
        printf("\nChoose the definition you need:\n");
        printf("1. Moment\n");
        printf("2. Moment of a Force\n");
        printf("3. Couple\n");
        printf("4. Moment of a Couple\n");
        printf("5. Characteristics of a Couple\n");
        printf("Enter your choice (1-5): ");
        int definitionChoice;
        scanf("%d", &definitionChoice);

        // Display the chosen definition
        switch (definitionChoice) {
            case 1:
                printf("\nMoment: A moment is the turning effect of a force about a point.");
                break;
            case 2:
                printf("\nMoment of a Force: The moment of a force about a point is the product of the force and the perpendicular distance from the point to the line of action of the force.\n the rotating action of a system of forces about a oint is called as moment of forced");
                break;
            case 3:
                printf("\nCouple: A couple is a system of two equal and opposite parallel forces separated by a perpendicular distance.");
                break;
            case 4:
                printf("\nMoment of a Couple: The moment of a couple is the product of one of the forces and the perpendicular distance between the forces.");
                break;
            case 5:
                printf("\nCharacteristics of a Couple: Couples have the properties of being equal in magnitude, opposite in direction, and parallel in line of action.");
                break;
            default:
                printf("\nInvalid choice. Please enter a number between 1 and 5.");
                break;
        }

        // Ask if the user wants more definitions
        printf("\nDo you want more definitions? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
}

void performCalculation() {
    int numForces;
    double pointX, pointY;
printf("CALCULATION OF MOMENT OF A SYSTEM OF FORCES\n");
    // Ask the user for the number of forces and the point of interest
    printf("Enter the number of forces: ");
    scanf("%d", &numForces);

    printf("Enter the x-coordinate of the point: ");
    scanf("%lf", &pointX);

    printf("Enter the y-coordinate of the point: ");
    scanf("%lf", &pointY);

    double totalMoment = 0.0;

    // Loop through each force and calculate the moment
    for (int i = 1; i <= numForces; ++i) {
        printf("Enter the magnitude of Force %d: ", i);
        double forceMagnitude;
        scanf("%lf", &forceMagnitude);

        printf("Enter the distance from Force %d to the point: ", i);
        double distance;
        scanf("%lf", &distance);

        // Calculate the moment and accumulate it
        double moment = calculateMoment(forceMagnitude, distance);
        totalMoment += moment;
    }

    // Display the total moment
    printf("\nThe total moment about the point is: %.2lf\n", totalMoment);
}

int main() {
    char userChoice;

    // Ask the user whether they want a definition or perform a calculation
    printf("Do you want to get a definition (D) or perform a calculation (C)? ");
    scanf(" %c", &userChoice);

    // Process the user's choice
    switch (userChoice) {
        case 'D':
        case 'd':
            // Call the getDefinition() function
            getDefinition();
            break;
        case 'C':
        case 'c':
            // Call the performCalculation() function
            performCalculation();
            break;
        default:
            printf("\nInvalid choice. Please enter 'D' for definition or 'C' for calculation.\n");
            break;
    }

    return 0;
}
