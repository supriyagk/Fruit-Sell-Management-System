#include<stdio.h>
<<<<<<< HEAD
int main()
{
    int MenuOption ; // initializing Variable for selecting option;
    do{

    printf("Welcome To Organic Fruit Shop\n Menu:\n 1)Mango\n 2)Apple\n 3)Butterfruit\n 4)Strawberry\n 5)Litchi\n 6)exit\n enter your option: ");//choose option 1 to 6;
    scanf("%d",&MenuOption);

    //here i use switch case for selecting and ordering fruits;
    switch(MenuOption){

    // if case 1 selected order confirmed for Mango and rest follows same ;
    case 1:
        printf("Mango");
        printf(" Chosen Successfully\n");
        break;
    case 2:
        printf("Apple");
         printf(" Chosen Successfully\n");
        break;
    case 3:
        printf("Butterfruit");
         printf(" Chosen Successfully\n");
        break;
    case 4:
        printf("Strawberry");
         printf(" Chosen Successfully\n");
        break;
    case 5:
        printf("Litchi");
         printf(" Chosen Successfully\n");
        break;
     case 6:
        printf("Exiting program\n");
        return 0; // Exit the program
     //In case if you choose option 7 it shows invalid option;
    case 7:
        printf("invalid option\n");
        printf("Enter Valid option\n");
        printf("Choosing Fruits Failed\n");
        break;

       default:
                printf("Invalid option\n");
                printf("Enter a valid option\n");
                printf("Choosing Fruits Failed\n");
        }
    } while (MenuOption < 1 || MenuOption > 4); // Loop until a valid option is entered

=======

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
>>>>>>> b8652b058c3408abe0e8f7208d7044ab9245875d
    return 0;
}
