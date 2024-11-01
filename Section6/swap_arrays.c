#include <stdio.h>
#define SIZE 4


void swapArrays(int *arr1, int *arr2, int size) {
    for (int i=0; i<size; i++) {
        arr1[i] += arr2[i];
        arr2[i] = arr1[i] - arr2[i];
        arr1[i] -= arr2[i];
    }
}

int main() {
    int array1[SIZE] = {1, 2, 3, 4};
    int array2[SIZE] = {5, 6, 7, 8};

    printf("\nFirst array: %d %d %d %d", array1[0], array1[1], array1[2], array1[3]);
    printf("\nSecond array: %d %d %d %d", array2[0], array2[1], array2[2], array2[3]);
    swapArrays(array1, array2, SIZE);
    printf("\nFirst array: %d %d %d %d", array1[0], array1[1], array1[2], array1[3]);
    printf("\nSecond array: %d %d %d %d", array2[0], array2[1], array2[2], array2[3]);

    return 0;
}
