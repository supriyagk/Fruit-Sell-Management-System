#include<stdio.h>

int main() {
    int MenuOption; // initializing Variable for selecting option;
    int quantity;   // Variable to store the quantity of fruits

    do {
        printf("Welcome To Organic Fruit Shop\n Menu:\n 1) Mango\n 2) Apple\n 3) Butterfruit\n 4) Strawberry\n 5) Litchi\n 6) exit\n enter your option: "); //choose option 1 to 6;
        scanf("%d", &MenuOption);

        //here i use switch case for selecting and ordering fruits;
        switch (MenuOption) {
            // if case 1 selected order confirmed for Mango and rest follows same ;
            case 1:
                printf("Enter quantity for Mango per kg: ");
                scanf("%d", &quantity);
                printf("Mango (%d) Chosen Successfully.\n", quantity);
                break;
            case 2:
                printf("Enter quantity for Apple per kg: ");
                scanf("%d", &quantity);
                printf("Apple (%d) Chosen Successfully.\n", quantity);
                break;
            case 3:
                printf("Enter quantity for Butterfruit per kg: ");
                scanf("%d", &quantity);
                printf("Butterfruit (%d) Chosen Successfully.\n", quantity);
                break;
            case 4:
                printf("Enter quantity for Strawberry per box: ");
                scanf("%d", &quantity);
                printf("Strawberry (%d) Chosen Successfully.\n", quantity);
                break;
            case 5:
                printf("Enter quantity for Litchi per box: ");
                scanf("%d", &quantity);
                printf("Litchi (%d) Chosen Successfully.\n", quantity);
                break;
            case 6:
                printf("Thank you visit again.\n");
                return 0; // Exit the program
            //In case if you choose option 7 it shows invalid option;
            case 7:
                printf("Invalid option\n");
                printf("Enter Valid option\n");
                printf("Choosing Fruits Failed\n");
                break;
            default:
                printf("Invalid option\n");
                printf("Enter a valid option\n");
                printf("Choosing Fruits Failed\n");
        }
    } while (MenuOption != 6); // Loop until a valid option is entered

    return 0;
}
