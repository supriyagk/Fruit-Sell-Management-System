#include "add.h"
int main() {
    int num;
    int fact;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    factorial(num, &fact);

    printf("Factorial of %d = %llu\n", num, fact);
}
