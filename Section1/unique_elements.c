#include <stdio.h>

#define SIZE 5

int isUnique(int num, int array[SIZE], int index) {
    for (int i=0; i<SIZE; i++) {
        if (num == array[i] && i != index) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int array[SIZE];
    int unique_counter = 0;

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    for (int i=0; i<SIZE; i++) {
        if (isUnique(array[i], array, i) == 1) {
            unique_counter++;
            printf("\n%d is a unique number.", array[i]);
        }
    }

    printf("\nThe amount of unique number/s in the array is: %d", unique_counter);

    return 0;
}
