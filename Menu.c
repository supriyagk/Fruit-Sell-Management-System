#include <stdio.h>
#include "fruit.h"

// Function to display the menu and get user's choice
int getMenuOption() {
    int option;
    printf("Welcome To Organic Fruit Shop\n Menu:\n 1) Mango\n 2) Apple\n 3) Butterfruit\n 4) Strawberry\n 5) Litchi\n 6) exit\n enter your option: ");
    scanf("%d", &option);
    return option;
}
