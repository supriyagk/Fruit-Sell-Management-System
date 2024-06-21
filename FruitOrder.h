#ifndef FRUITORDER_H
#define FRUITORDER_H

// Enum for payment method
enum PaymentMethod {
    CASH,
    CARD,
    UPI,
    INVALID
};

// Structure for fruit order
struct FruitOrder {
    char fruitName[50];
    char unit[10];
    float pricePerUnit;
    float quantity;
};

#endif // FRUITORDER_H
