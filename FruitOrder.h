#ifndef FRUITORDER_H
#define FRUITORDER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enums and structs
enum PaymentMethod {
    CASH,
    CARD,
    UPI,
    INVALID
};

struct FruitOrder {
    char fruitName[50];
    char unit[10];
    float pricePerUnit;
    float quantity;
};

// Function prototypes
void displayMenu();
int getMenuOption();
void orderFruit(struct FruitOrder* order);
float calculateTotalPrice(struct FruitOrder* order);
enum PaymentMethod getPaymentMethod();
int validatePayment(enum PaymentMethod method);
void processPayment(float totalPrice, enum PaymentMethod paymentMethod);
void generateBill(struct FruitOrder* order, float totalPrice, enum PaymentMethod paymentMethod, FILE* file);
void displayOrderHistory();
void sortOrderHistory();

// Constants
#define MAX_ORDERS 100
#define MAX_INPUT 100

// Global variables
extern struct FruitOrder orders[MAX_ORDERS];
extern int orderCount;

#endif // FRUITORDER_H
