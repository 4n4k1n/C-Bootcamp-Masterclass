#include <stdio.h>
#define SIZE 5


int isSorted(int *arr, int size, int *result) {
    for (int i=0; i<size-1; i++) {
        if (arr[i] > arr[i+1]) {
            if (arr[0] < arr[size-1]) {
                *result = 0;
                return 0;
            }
            *result = -1;
            return -1;
        }
    }
    *result = 1;
    return 1;
}


int main() {
    int array[SIZE];
    int result;
    
    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    printf("\nReturn = %d", isSorted(array, SIZE, &result));
    printf("\nResult = %d", result);





    return 0;
}