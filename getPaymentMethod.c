#include "FruitOrder.h"

enum PaymentMethod getPaymentMethod() {
    int option;
    printf("\nSelect payment method:\n1. Cash\n2. Card\n3. UPI\n");
    while (scanf("%d", &option) != 1 || option < 1 || option > 3) {
        printf("Invalid payment method. Select 1, 2, or 3.\n");
        while (getchar() != '\n'); // Clear invalid input
    }
    return option - 1;
}
