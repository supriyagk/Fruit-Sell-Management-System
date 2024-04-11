#include <stdio.h>
#include <string.h>
#include "fruit.h"

// Function to handle fruit ordering
void orderFruit(const char *fruit, float *quantity, const char *unit) {
    printf("Enter quantity for %s per %s: ", fruit, unit);
    scanf("%f", quantity);
    printf("%s (%.2f %s) Chosen Successfully.\n", fruit, *quantity, unit);
}
