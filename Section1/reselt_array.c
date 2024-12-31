#include <stdio.h>

#define SIZE 5

void resetArray(int *array, int size) {
    for (int i=0; i<size; i++) {
        array[i] = 0;
    }
}

int main() {
    int array[SIZE] = {2, 4, 6, 8, 9};

    resetArray(array, SIZE);

    for (int i=0; i<SIZE; i++) {
        printf("\n%d", array[i]);
    }

    return 0;
}
