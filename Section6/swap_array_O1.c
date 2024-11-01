#include <stdio.h>
#include <stdlib.h>
#define SIZE 4


void printArray(int *arr, int size) {
    printf("\nArray: ");
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}


void *createArray(int size) {
    int *arr;
    arr = (int*)malloc(size*sizeof(int));
    for (int i=0; i<size; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &arr[i]);
    }
    printf("\n");
    return arr;
}


void swapArrayO1(int **arr1, int **arr2) {
    int *temp;
    temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}


int main() {
    int *arr1;
    int *arr2;

    arr1 = createArray(SIZE);
    arr2 = createArray(SIZE);

    printArray(arr1, SIZE);
    printArray(arr2, SIZE);

    swapArrayO1(&arr1, &arr2);

    printArray(arr1, SIZE);
    printArray(arr2, SIZE);

    free(arr1);
    free(arr2);

    return 0;
}