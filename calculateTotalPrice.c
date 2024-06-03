#include "FruitOrder.h"

float calculateTotalPrice(struct FruitOrder *order)
{
    return order->pricePerUnit * order->quantity;
}
