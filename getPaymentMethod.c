#include <stdio.h>
#include "FruitOrder.h"

enum PaymentMethod getPaymentMethod()
{
    int option;
    printf("Select Payment Mode:\n");
    printf("1) Cash\n");
    printf("2) Card\n");
    printf("3) Digital Wallet\n");
    printf("Enter your option: ");
    scanf("%d", &option);

    switch(option)
    {
        case 1: return CASH;
        case 2: return CARD;
        case 3: return DIGITAL_WALLET;
        default: return INVALID_PAYMENT;
    }
}
