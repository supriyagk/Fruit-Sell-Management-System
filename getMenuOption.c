#include "FruitOrder.h"

int getMenuOption() {
    char input[MAX_INPUT];
    int option;

    printf("Enter Menu option: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Validate if the input is a number and in range
        if (sscanf(input, "%d", &option) == 1 && strchr(input, '\n') != NULL) {
            if (option >= 1 && option <= 6) {
                return option;
            }
        }
    }

    printf("Invalid option.\n Enter a valid option\n");
    return -1; // Return invalid option code
}
