#include <stdio.h>
#define SIZE 5

void printLeft(int *arr, int size) {
    printf("%d", arr[size-1]);
    if (size > 1) {
        printLeft(arr, size-1);
    }
}

void printRight(int *arr, int size) {
    if (size > 1) {
        printRight(arr, size-1);
    }
    printf("%d", arr[size-1]);
}


int main() {
    int array[SIZE] = {1, 2, 3, 4, 5};

    printf("\n");
    printLeft(array, SIZE);

    printf("\n");
    printRight(array, SIZE);

    return 0;
}