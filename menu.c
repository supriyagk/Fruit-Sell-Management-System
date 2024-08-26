#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Include this for strcpy
#include "functions.h"

void displayMenu() {
    printf("Welcome To Farm Fresh Fruits Shop.\n\n");
    printf("***LIST OF FRUITS AVAILABLE**\n");
    printf("1. Mango            (30.0 per kg)\n");
    printf("2. Apple            (50.0 per kg)\n");
    printf("3. Butterfruit      (80.0 per kg)\n");
    printf("4. Strawberry       (50.0 per box)\n");
    printf("5. Litchi           (60.0 per box)\n");
    printf("6. Exit\n");
    printf("*************\n");
}

int getMenuOption() {
    char input[MAX_INPUT];
    int option;
    char* end;

    printf("Enter Menu option: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        option = strtol(input, &end, 10);

        // Check if the entire input is a valid integer
        if (*end == '\0' || *end == '\n') {
            if (option >= 1 && option <= 6) {
                return option;
            }
        }
    }

    printf("Invalid option. Enter a valid option between 1 and 6.\n");
    return -1; // Return invalid option code
}
