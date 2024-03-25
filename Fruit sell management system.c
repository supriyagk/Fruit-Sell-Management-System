#include<stdio.h>

int main() {

    /*const: This keyword indicates that the data being pointed to is constant, meaning it cannot be modified.

    char *menu[]: This declares an array of pointers to characters.
    Each element of the array menu is a pointer to a string (a sequence of characters).
    Since it's an array of pointers, it's commonly used to store an array of strings*/
    const char *menu[] = {"order Mango", "order Apple", "order Butterfruit", "order Strawberry", "order Litchi"};
    int MenuOption;

    /* here enter your option here*/
    printf(" 1)Mango\n 2)Apple\n 3)Butterfruit\n 4)Strawberry\n 5)Litchi\n Enter your option:");
    scanf("%d", &MenuOption);

    /* if you select option 1 to 5 it select options anyone which option you sleected */
    if (MenuOption >= 1 && MenuOption <= 5) {

    //then it select the option and ordered successfully indicates;
    printf("%s\n", menu[MenuOption - 1]);
    printf("Ordered Successfully\n");

    //else it shows invalid option, and it shows enter a correct option;
    } else {
    printf("Invalid option\n");
    printf("Please enter a correct option\n");
    }
    //return statement shows function executed successfully;
    return 0;
}
