#include <stdio.h>
#include <stdlib.h>

float cost(float amount, char c, int std);
float cbag(float bag);

int main()
{
    int std;
    float amount, book_cost, bag;
    char c;

    printf("Books you are buying are for students of which class?\n");
    scanf("%d", &std);

    printf("If you want CBSE material, type C, otherwise type S for State board material\n");
    scanf(" %c", &c);

    printf("Enter the total MRP cost of the books\n");
    scanf("%f", &amount);

    printf("Cost of bag is:");
    scanf("%f", &bag);

    book_cost = cost(amount, c, std);
    bag=cbag(bag);

    if (book_cost > 0)
        printf("Total billable cost=%f and cost of bag=%f\n", book_cost, bag * 0.8);

    return 0;
}

float cost(float amount, char c, int std) {
    float book_cost = 0.0;

    switch (c) {
    case 'C':
        if (std >= 1 && std <= 4)
            book_cost = amount * 0.55;
        else if (std >= 5 && std <= 7)
            book_cost = amount * 0.58;
        else if (std >= 8 && std <= 10)
            book_cost = amount * 0.60;
        break;

    case 'S':
        if (std >= 1 && std <= 4)
            book_cost = amount * 0.60;
        else if (std >= 5 && std <= 7)
            book_cost = amount * 0.65;
        else if (std >= 8 && std <= 10)
            book_cost = amount * 0.70;
        break;
    }

    return book_cost;
}

float cbag(float bag) {
    return bag;
}
