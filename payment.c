#include <stdio.h>
#include <stdlib.h>  // Include this for strtol
#include "functions.h"

enum PaymentMethod getPaymentMethod() {
    char input[MAX_INPUT];
    int option;
    char* end;

    printf("\nSelect payment method:\n1. Cash\n2. Card\n3. UPI\n");

    while (1) {
        if (fgets(input, sizeof(input), stdin) != NULL) {
            option = strtol(input, &end, 10);

            // Check if the entire input is a valid integer
            if (*end == '\0' || *end == '\n') {
                if (option >= 1 && option <= 3) {
                    return option - 1;
                }
            }
        }

        printf("Invalid payment method. Select 1, 2, or 3.\n");
    }
}

int validatePayment(enum PaymentMethod method) {
    return method >= CASH && method <= UPI;
}

void processPayment(float totalPrice, enum PaymentMethod paymentMethod) {
    printf("Processing payment of %.2f Rupees via %s...\n", totalPrice,
           paymentMethod == CASH ? "Cash" : (paymentMethod == CARD ? "Card" : "UPI"));
}
