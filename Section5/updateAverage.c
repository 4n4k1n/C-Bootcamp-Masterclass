#include <stdio.h>
#define SIZE 5


void updateAverage(int *arr, int size, float *average) {
    *average = 0;
    for (int i=0; i<size; i++) {
        *average += arr[i];
    }
    *average = *average/size;
}


int main() {
    int array[SIZE];
    float average;

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    updateAverage(array, SIZE, &average);
    printf("The average value of the array is: %f", average);

    return 0;
}