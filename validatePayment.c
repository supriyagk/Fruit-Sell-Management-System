#include "FruitOrder.h"

int validatePayment(enum PaymentMethod paymentMethod)
{
    if (paymentMethod == CASH || paymentMethod == CARD || paymentMethod == DIGITAL_WALLET)
    {
        return 1;
    }
    return 0;
}
