#include <stdio.h>
#define SIZE 5

int goodNeigbors(int *arr, int size) {

    for (int i=1; i<size-1; i++) {
        if (arr[i-1] + arr[i+1] == arr[i]) {
            return 1;
        } 
    }
    return 0;
}

int main() {
    int array[SIZE];

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    printf("\n%s", goodNeigbors(array, SIZE) ? "There are good Neighbors!" : "There are no good Neighbors!");

    return 0;
}