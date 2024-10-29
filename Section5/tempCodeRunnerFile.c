#include <stdio.h>
#define SIZE 5


void averageValue(int *arr, int size, int *average) {
    *average = 0;
    for (int i=0; i<size; i++) {
        *average += arr[i];
    }
    *average /= size;
}

int main() {
    int array[SIZE];
    int average;

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    averageValue(array, SIZE, &average);
    printf("The average value of the array is: %d", average);

    return 0;
}