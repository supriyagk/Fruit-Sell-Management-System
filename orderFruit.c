#include "FruitOrder.h"

void orderFruit(struct FruitOrder* order) {
    printf("Enter quantity of %s (%s): ", order->fruitName, order->unit);
    while (scanf("%f", &order->quantity) != 1 || order->quantity <= 0) {
        printf("Invalid quantity. Enter a positive number.\n");
        while (getchar() != '\n'); // Clear invalid input
    }
}
