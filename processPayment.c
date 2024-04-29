#include "FruitOrder.h"

// Function to process payment
void processPayment(float totalPrice)
{
    int paymentMode;
    printf("Total Price: %.2f Rupees\n", totalPrice);
    printf("Select Payment Mode:\n 1) Cash\n 2) Card\n");
    scanf("%d", &paymentMode);
    switch (paymentMode) {
        case 1:
            printf("Payment Successful.\n Thank you! Visit again.\n");
            break;
        case 2:
            printf("Card Payment Successful.\n Thank you! Visit again.\n");
            break;
        default:
            printf("Invalid Payment Mode. Payment Failed.\n");
    }
}
