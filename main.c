#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Include this for strcpy
#include "functions.h"

struct FruitOrder orders[MAX_ORDERS];
int orderCount = 0;

int main() {
    int menuOption;
    struct FruitOrder* order = malloc(sizeof(struct FruitOrder));
    float totalPrice;
    enum PaymentMethod paymentMethod;

    FILE* file = fopen("order_history.txt", "a");
    if (file == NULL) {
        fprintf(stderr, "Failed to open file\n");
        return 1;
    }

    if (order == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Loop until the user chooses to exit
    while (1) {
        displayMenu();
        menuOption = getMenuOption();

        // If invalid option
        if (menuOption == -1) {
            continue;
        }

        // Process the user's choice
        switch (menuOption) {
            case 1:
                strcpy(order->fruitName, "Mango");
                strcpy(order->unit, "kg");
                order->pricePerUnit = 30.0;
                orderFruit(order);
                break;
            case 2:
                strcpy(order->fruitName, "Apple");
                strcpy(order->unit, "kg");
                order->pricePerUnit = 50.0;
                orderFruit(order);
                break;
            case 3:
                strcpy(order->fruitName, "Butterfruit");
                strcpy(order->unit, "kg");
                order->pricePerUnit = 80.0;
                orderFruit(order);
                break;
            case 4:
                strcpy(order->fruitName, "Strawberry");
                strcpy(order->unit, "box");
                order->pricePerUnit = 50.0;
                orderFruit(order);
                break;
            case 5:
                strcpy(order->fruitName, "Litchi");
                strcpy(order->unit, "box");
                order->pricePerUnit = 60.0;
                orderFruit(order);
                break;
            case 6:
                printf("Thank you, visit again.\n");
                fclose(file);
                free(order);
                return 0;
            default:
                printf("Invalid option. Enter a valid option.\n");
                continue;
        }

        // Validate pricePerUnit and quantity
        if (order->pricePerUnit <= 0 || order->quantity <= 0) {
            printf("Invalid price or quantity.\n");
            continue;
        }

        // Calculate the total price
        totalPrice = calculateTotalPrice(order);

        // Display total price
        printf("Total Price: %.2f Rupees\n", totalPrice);

        // Get the payment method
        paymentMethod = getPaymentMethod();

        // Validate the payment method
        if (validatePayment(paymentMethod)) {
            // Process the payment
            processPayment(totalPrice, paymentMethod);

            // Generate the bill and write to file
            generateBill(order, totalPrice, paymentMethod, file);

            // Save to array
            if (orderCount < MAX_ORDERS) {
                orders[orderCount++] = *order;
            } else {
                printf("Order history is full.\n");
            }
        } else {
            printf("Invalid payment method. Please try again.\n");
        }

        // Clear input buffer after each valid order
        while (getchar() != '\n');
    }

    fclose(file);
    free(order);
    displayOrderHistory();
    sortOrderHistory();

    return 0;
}
