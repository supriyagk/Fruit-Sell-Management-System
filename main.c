#include <stdio.h>
#include <string.h>
#include "FruitOrder.h"
#include "orderFruit.c"
#include "calculateTotalPrice.c"
#include "getMenuOption.c"
#include "processPayment.c"


int main()
{
    int MenuOption;
    struct FruitOrder order;
    float totalPrice;

    // Loop until the user chooses to exit
    do {
        MenuOption = getMenuOption();

        // Process the user's choice
        switch (MenuOption) {
            case 1:     // If the user selects Mango
                strcpy(order.fruitName, "Mango");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 30.0; // Price per kg
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 2:     // If the user selects Apple
                strcpy(order.fruitName, "Apple");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 50.0; // Price per kg
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 3:     // If the user selects Butterfruit
                strcpy(order.fruitName, "Butterfruit");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 80.0; // Price per kg
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 4:     // If the user selects Strawberry
                strcpy(order.fruitName, "Strawberry");
                strcpy(order.unit, "box");
                order.pricePerUnit = 50.0; // Price per box
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 5:     // If the user selects Litchi
                strcpy(order.fruitName, "Litchi");
                strcpy(order.unit, "box");
                order.pricePerUnit = 60.0; // Price per box
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 6:     // If the user chooses to exit
                printf("Thank you visit again.\n");
                return 0;   // Exit the program
            default:    // If the user enters an invalid option
                printf("Invalid option\n");
                printf("Enter a valid option\n");
                printf("Choosing Fruits Failed\n");
        }
    } while (MenuOption != 6); // Continue looping until the user chooses to exit

    return 0;
}
