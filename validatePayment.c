#include "FruitOrder.h"

int validatePayment(enum PaymentMethod method) {
    return method >= CASH && method <= UPI;
}
