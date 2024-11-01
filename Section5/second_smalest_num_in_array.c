#include <stdio.h>
#define SIZE 8


int secondSmallestNum(int *arr, int size) {
    int smallest_num = arr[0];
    int second_smallest_num = __INT_MAX__;

    for (int i=1; i<size; i++) {
        if (smallest_num>arr[i]) {
            smallest_num = arr[i];
        }
    }
    for (int j=0; j<size; j++) {
        if (arr[j] < second_smallest_num && arr[j] != smallest_num) {
            second_smallest_num = arr[j];
        }
    }

    return second_smallest_num;
}


int main() {
    int array[SIZE];

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    printf("The second smalest number is %d", secondSmallestNum(array, SIZE));

    return 0;
}