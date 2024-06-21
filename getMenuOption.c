#include <stdio.h>

int getMenuOption() {
    int option;
    printf("Welcome To Farm Fresh Fruit Shop\n \nMenu:\n");
    printf("1. Mango         (30rs per KG)\n");
    printf("2. Apple         (50rs per KG)\n");
    printf("3. Butterfruit   (80rs per KG)\n");
    printf("4. Strawberry    (50rs per Box)\n");
    printf("5. Litchi        (60rs per Box)\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        while (getchar() != '\n'); // Clear the buffer
        option = -1; // Set invalid option
    }
    return option;
}
