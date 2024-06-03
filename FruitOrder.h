#ifndef FRUITORDER_H
#define FRUITORDER_H

struct FruitOrder
{
    char fruitName[20];
    char unit[10];
    float pricePerUnit;
    float quantity;
};

enum PaymentMethod
{
    CASH,
    CARD,
    DIGITAL_WALLET,
    INVALID_PAYMENT
};

int getMenuOption();
void orderFruit(struct FruitOrder *order);
float calculateTotalPrice(struct FruitOrder *order);
void processPayment(float totalPrice, enum PaymentMethod paymentMethod);
enum PaymentMethod getPaymentMethod();
int validatePayment(enum PaymentMethod paymentMethod);

#endif // FRUITORDER_H
