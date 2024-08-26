#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void orderFruit(struct FruitOrder* order) {
    char input[MAX_INPUT];
    char* end;

    printf("Enter quantity of %s (%s): ", order->fruitName, order->unit);

    while (1) {
        if (fgets(input, sizeof(input), stdin) != NULL) {
            order->quantity = strtof(input, &end);

            // Check if the entire input is a valid float and greater than zero
            if (*end == '\0' || *end == '\n') {
                if (order->quantity > 0) {
                    return;
                }
            }
        }

        printf("Invalid quantity. Enter a positive number.\n");
    }
}

float calculateTotalPrice(struct FruitOrder* order) {
    return order->pricePerUnit * order->quantity;
}
