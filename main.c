#include <stdio.h>
#include <string.h>

// Structure to represent a fruit order
struct FruitOrder {
    char fruitName[20];
    float quantity;
    char unit[5];
};

// Function to handle fruit ordering
void orderFruit(const char *fruit, float *quantity, const char *unit) {
    printf("Enter quantity for %s per %s: ", fruit, unit);
    scanf("%f", quantity);
    printf("%s (%.2f %s) Chosen Successfully.\n", fruit, *quantity, unit);
}

// Function to display the menu and get user's choice
int getMenuOption() {
    int option;
    printf("Welcome To Organic Fruit Shop\n Menu:\n 1) Mango\n 2) Apple\n 3) Butterfruit\n 4) Strawberry\n 5) Litchi\n 6) exit\n enter your option: ");
    scanf("%d", &option);
    return option;
}

int main() {
    int MenuOption;
    struct FruitOrder order;

    // Loop until the user chooses to exit
    do {
        MenuOption = getMenuOption();

        // Process the user's choice
        switch (MenuOption) {
            case 1:     // If the user selects Mango
                strcpy(order.fruitName, "Mango");
                strcpy(order.unit, "kg");
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 2:     // If the user selects Apple
                strcpy(order.fruitName, "Apple");
                strcpy(order.unit, "kg");
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 3:     // If the user selects Butterfruit
                strcpy(order.fruitName, "Butterfruit");
                strcpy(order.unit, "kg");
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 4:     // If the user selects Strawberry
                strcpy(order.fruitName, "Strawberry");
                strcpy(order.unit, "box");
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 5:     // If the user selects Litchi
                strcpy(order.fruitName, "Litchi");
                strcpy(order.unit, "box");
                orderFruit(order.fruitName, &order.quantity, order.unit);
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
