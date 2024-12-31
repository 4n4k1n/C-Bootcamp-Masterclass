#include <stdio.h>
#define SIZE 5

int sumArray(int array[], int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum += array[i];
    }
    return sum;
}


int main() {
    int array[SIZE];

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    int sum = sumArray(array, SIZE);

    printf("\nSum of the array = %d", sum);

    return 0;
}
