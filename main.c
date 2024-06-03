#include <stdio.h>
#include <string.h>
#include "FruitOrder.h"
#include "orderFruit.c"
#include "calculateTotalPrice.c"
#include "getMenuOption.c"
#include "processPayment.c"
#include "getPaymentMethod.c"
#include "validatePayment.c"

int main()
{
    int MenuOption;
    struct FruitOrder order;
    float totalPrice;
    enum PaymentMethod paymentMethod;

    // Loop until the user chooses to exit
    do {
        MenuOption = getMenuOption();

        // Process the user's choice
        switch (MenuOption)
        {
            case 1:     // If the user selects Mango
                strcpy(order.fruitName, "Mango");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 30.0; // Price per kg
                orderFruit(&order);
                break;
            case 2:     // If the user selects Apple
                strcpy(order.fruitName, "Apple");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 50.0; // Price per kg
                orderFruit(&order);
                break;
            case 3:     // If the user selects Butterfruit
                strcpy(order.fruitName, "Butterfruit");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 80.0; // Price per kg
                orderFruit(&order);
                break;
            case 4:     // If the user selects Strawberry
                strcpy(order.fruitName, "Strawberry");
                strcpy(order.unit, "box");
                order.pricePerUnit = 50.0; // Price per box
                orderFruit(&order);
                break;
            case 5:     // If the user selects Litchi
                strcpy(order.fruitName, "Litchi");
                strcpy(order.unit, "box");
                order.pricePerUnit = 60.0; // Price per box
                orderFruit(&order);
                break;
            case 6:     // If the user chooses to exit
                printf("Thank you, visit again.\n");
                return 0;   // Exit the program
            default:    // If the user enters an invalid option
                printf("Invalid option.\n");
                printf("Enter a valid option.\n");
                continue; // Go back to the menu
        }

        // Calculate the total price
        totalPrice = calculateTotalPrice(&order);

        // Display total price
        printf("Total Price: %.2f Rupees\n", totalPrice);

        // Get the payment method
        paymentMethod = getPaymentMethod();

        // Validate the payment method
        if (validatePayment(paymentMethod))
        {
            // Process the payment
            processPayment(totalPrice, paymentMethod);
        }
        else
        {
            printf("Invalid payment method. Please try again.\n");
        }

    } while (MenuOption != 6); // Continue looping until the user chooses to exit

    return 0;
}
