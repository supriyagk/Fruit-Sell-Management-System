#include "FruitOrder.h"

// Function to calculate total price
float calculateTotalPrice(struct FruitOrder *order) {
    return (*order).quantity * (*order).pricePerUnit;
}
