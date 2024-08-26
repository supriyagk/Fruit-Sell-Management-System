#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define MAX_ORDERS 100
#define MAX_INPUT 100

// Enum for payment methods
enum PaymentMethod {
    CASH,
    CARD,
    UPI
};

// Structure for fruit order
struct FruitOrder {
    char fruitName[MAX_INPUT];
    char unit[MAX_INPUT];
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

extern struct FruitOrder orders[MAX_ORDERS];
extern int orderCount;

#endif // FUNCTIONS_H
