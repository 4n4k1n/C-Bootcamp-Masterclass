#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i=1; i<size; i++) {
        if(max<arr[i]) {
            max = arr[i];
        }
    }

    return max;
}



int main() {
    int array[5];
    int max;

    for (int i=0; i<5; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    max = findMax(array, 5);

    printf("\nThe max number in the array is: %d", max);
    
    return 0;
}