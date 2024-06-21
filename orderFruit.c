#include <stdio.h>
#include "FruitOrder.h"

void orderFruit(struct FruitOrder* order) {
    printf("Enter quantity in %s: ", order->unit);
    if (scanf("%f", &order->quantity) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        order->quantity = 0; // Reset the quantity to avoid incorrect calculation
        while (getchar() != '\n'); // Clear the input buffer
    }
}
