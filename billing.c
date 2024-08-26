#include <stdio.h>
#include <time.h>
#include "functions.h"

void generateBill(struct FruitOrder* order, float totalPrice, enum PaymentMethod paymentMethod, FILE* file) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    const char* paymentMethods[] = {"Cash", "Card", "UPI", "Invalid"};
    printf("\n*** BILL ***\n");
    printf("Fruit: %s\n", order->fruitName);
    printf("Quantity: %.2f %s\n", order->quantity, order->unit);
    printf("Total Price: %.2f Rupees\n", totalPrice);
    printf("Payment Method: %s\n", paymentMethods[paymentMethod]);
    printf("Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("Thank you for your purchase!\n");
    printf("Visit again!\n");
    printf("****\n\n\n");

    // Write bill to file
    fprintf(file, "*** BILL ***\n");
    fprintf(file, "Fruit: %s\n", order->fruitName);
    fprintf(file, "Quantity: %.2f %s\n", order->quantity, order->unit);
    fprintf(file, "Total Price: %.2f Rupees\n", totalPrice);
    fprintf(file, "Payment Method: %s\n", paymentMethods[paymentMethod]);
    fprintf(file, "Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fprintf(file, "Thank you for your purchase!\n");
    fprintf(file, "Visit again!\n");
    fprintf(file, "******\n\n");
}

void displayOrderHistory() {
    printf("\nOrder History:\n");
    for (int i = 0; i < orderCount; i++) {
        printf("Fruit: %s, Quantity: %.2f %s, Total Price: %.2f\n",
               orders[i].fruitName, orders[i].quantity, orders[i].unit, calculateTotalPrice(&orders[i]));
    }
}

void sortOrderHistory() {
    // Simple bubble sort based on total price
    for (int i = 0; i < orderCount - 1; i++) {
        for (int j = 0; j < orderCount - i - 1; j++) {
            if (calculateTotalPrice(&orders[j]) < calculateTotalPrice(&orders[j + 1])) {
                struct FruitOrder temp = orders[j];
                orders[j] = orders[j + 1];
                orders[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Order History (by price):\n");
    displayOrderHistory();
}
