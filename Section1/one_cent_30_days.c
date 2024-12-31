#include <stdio.h>

float cash = 0.01;

int main () {
    for (int i = 0; i < 30; i++) {
        cash = cash * 2;
        printf("\nCash day %d: %.2f$", i+1, cash);
    }

    return 0;
}
