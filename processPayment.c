#include <stdio.h>
#include "FruitOrder.h"

void processPayment(float totalPrice, enum PaymentMethod method) {
    const char* methodName;

    switch (method) {
        case CASH: methodName = "Cash"; break;
        case CARD: methodName = "Card"; break;
        case UPI: methodName = "UPI"; break;
        default: methodName = "Unknown"; break;
    }

    printf("Processing payment of %.2f Rupees using %s...\n", totalPrice, methodName);
    printf("Payment successful.\n");
}
