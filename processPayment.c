#include <stdio.h>
#include "FruitOrder.h"

void processPayment(float totalPrice, enum PaymentMethod paymentMethod)
{
    const char *method;
    switch (paymentMethod)
    {
        case CASH:
            method = "Cash";
            break;
        case CARD:
            method = "Card";
            break;
        case DIGITAL_WALLET:
            method = "Digital Wallet";
            break;
        default:
            method = "Invalid Payment Method";
            break;
    }
    printf("Total Price: %.2f Rupees\n", totalPrice);
    printf("Payment of %.2f Rupees using %s processed successfully.\n", totalPrice, method);
    printf("Thank you.\n");
}
