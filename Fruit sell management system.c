#include<stdio.h>
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
        printf(" Chosen Successfully.\n");
        break;
    case 2:
        printf("Apple");
         printf(" Chosen Successfully.\n");
        break;
    case 3:
        printf("Butterfruit");
         printf(" Chosen Successfully.\n");
        break;
    case 4:
        printf("Strawberry");
         printf(" Chosen Successfully.\n");
        break;
    case 5:
        printf("Litchi");
         printf(" Chosen Successfully.\n");
        break;
     case 6:
        printf("Thank you visit again.\n");
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
    } while (MenuOption < 1 || MenuOption > 6); // Loop until a valid option is entered

    return 0;
}
