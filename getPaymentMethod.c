#include <stdio.h>
#include "FruitOrder.h"

enum PaymentMethod getPaymentMethod() {
    int option;
    printf("\nPayment Methods:\n");
    printf("1. Cash\n");
    printf("2. Card\n");
    printf("3. UPI\n");
    printf("Enter your payment method: ");
    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        while (getchar() != '\n'); // Clear the buffer
        return INVALID;
    }

    switch (option) {
        case 1: return CASH;
        case 2: return CARD;
        case 3: return UPI;
        default: return INVALID;
    }
}
