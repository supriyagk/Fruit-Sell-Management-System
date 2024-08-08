#include "FruitOrder.h"

void sortOrderHistory() {
    for (int i = 0; i < orderCount - 1; i++) {
        for (int j = 0; j < orderCount - i - 1; j++) {
            if (orders[j].pricePerUnit * orders[j].quantity > orders[j + 1].pricePerUnit * orders[j + 1].quantity) {
                struct FruitOrder temp = orders[j];
                orders[j] = orders[j + 1];
                orders[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Order History by Total Price:\n");
    displayOrderHistory();
}
