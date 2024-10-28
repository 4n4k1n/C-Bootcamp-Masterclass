#include <stdio.h>
#define SIZE 5

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    
    for (int i=1; i<size; i++) {
        if (arr[i]<*min) {
            *min = arr[i];
        }
        if (arr[i]>*max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arry[SIZE];
    int min;
    int max;

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &arry[i]);
    }

    findMinMax(arry, SIZE, &min, &max);

    printf("\nMin = %d", min);
    printf("\nMax = %d", max);

    return 0;
}