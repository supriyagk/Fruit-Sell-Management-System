#include "FruitOrder.h"

void processPayment(float totalPrice, enum PaymentMethod paymentMethod) {
    printf("Processing payment of %.2f Rupees via %s...\n", totalPrice,
           paymentMethod == CASH ? "Cash" : (paymentMethod == CARD ? "Card" : "UPI"));
}
