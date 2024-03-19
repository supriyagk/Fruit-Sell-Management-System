#include <stdio.h>

void factorial(int n, int *result) {
    *result = 1;
    for (int i = 1; i <= n; ++i)
        *result *= i;
}