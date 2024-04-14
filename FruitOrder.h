#ifndef FRUITORDER_H
#define FRUITORDER_H

// Structure to represent a fruit order
struct FruitOrder {
    char fruitName[20];
    float quantity;
    char unit[5];
    float pricePerUnit;
};

// Function to handle fruit ordering
void orderFruit(struct FruitOrder *order);

// Function to calculate total price
float calculateTotalPrice(struct FruitOrder *order);

// Function to display the menu and get user's choice
int getMenuOption();

// Function to process payment
void processPayment(float totalPrice);

#endif // FRUITORDER_H
