#include <stdio.h>
#include <stdlib.h>

int *createArray(int *size) {
    int *arr;
    
    printf("\nEnter the amount of elements in your array: ");
    scanf("%d", size);

    arr = (int*)malloc((*size)*sizeof(int));

    return arr;
}


int main() {
    int *arr;
    int size;

    arr = createArray(&size);


    for (int i=0; i<size; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &arr[i]);
    }


    printf("Array: ");
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }



    free(arr);
    return 0;
}