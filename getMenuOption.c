#include <stdio.h>

int getMenuOption()
{
    int option;
    printf("Welcome To Organic Fruit Shop\n");
    printf(" Farm Fresh Fruits Menu:\n");
    printf("1) Mango\n");
    printf("2) Apple\n");
    printf("3) Butterfruit\n");
    printf("4) Strawberry\n");
    printf("5) Litchi\n");
    printf("6) exit\n");
    printf("Enter your option: ");
    scanf("%d", &option);
    return option;
}
