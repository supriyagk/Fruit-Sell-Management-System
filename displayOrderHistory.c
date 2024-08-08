#include "FruitOrder.h"

void displayOrderHistory() {
    printf("\nOrder History:\n");
    for (int i = 0; i < orderCount; i++) {
        printf("Fruit: %s, Quantity: %.2f %s, Total Price: %.2f\n",
               orders[i].fruitName, orders[i].quantity, orders[i].unit, orders[i].pricePerUnit * orders[i].quantity);
    }
}
