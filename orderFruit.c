#include <stdio.h>
#include "FruitOrder.h"

void orderFruit(struct FruitOrder *order)
{
    printf("Enter quantity for %s (per %s): ", order->fruitName, order->unit);
    scanf("%f", &order->quantity);
    printf("%s (%.2f %s) Chosen Successfully.\n", order->fruitName, order->quantity, order->unit);
}
