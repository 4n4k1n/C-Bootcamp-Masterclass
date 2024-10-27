#include <stdio.h>


    int sumArray(int *array, int size) {
        int sum = 0;
        for (int i=0; i<size; i++) {
            sum += array[i];
        }
        return sum;
    }

    float averageValue(int *array, int size) {
        float average;
        average = sumArray(array, size);
        average = average/size;
        return average;
    }


int main() {
    float average;
    int array[5];

    for (int i=0; i<5; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    average = averageValue(array, 5);
    printf("\nThe average value in the array is: %.2f", average);

    return 0;
}