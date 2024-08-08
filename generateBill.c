#include "FruitOrder.h"
#include <time.h>

void generateBill(struct FruitOrder* order, float totalPrice, enum PaymentMethod paymentMethod, FILE* file) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    const char* paymentMethods[] = {"Cash", "Card", "UPI", "Invalid"};
    printf("\n***** BILL *****\n");
    printf("Fruit: %s\n", order->fruitName);
    printf("Quantity: %.2f %s\n", order->quantity, order->unit);
    printf("Total Price: %.2f Rupees\n", totalPrice);
    printf("Payment Method: %s\n", paymentMethods[paymentMethod]);
    printf("Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("Thank you for your purchase!\n");
    printf("Visit again!\n");
    printf("************\n\n\n");

    // Write bill to file
    fprintf(file, "********* BILL *********\n");
    fprintf(file, "Fruit: %s\n", order->fruitName);
    fprintf(file, "Quantity: %.2f %s\n", order->quantity, order->unit);
    fprintf(file, "Total Price: %.2f Rupees\n", totalPrice);
    fprintf(file, "Payment Method: %s\n", paymentMethods[paymentMethod]);
    fprintf(file, "Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fprintf(file, "Thank you for your purchase!\n");
    fprintf(file, "Visit again!\n");
    fprintf(file, "****************\n\n");
}
