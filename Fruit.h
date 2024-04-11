#ifndef FRUIT_H
#define FRUIT_H

// Structure to represent a fruit order
struct FruitOrder {
    char fruitName[20];
    float quantity;
    char unit[5];
};

// Function prototypes
void orderFruit(const char *fruit, float *quantity, const char *unit);
int getMenuOption();

#endif /* FRUIT_H */
