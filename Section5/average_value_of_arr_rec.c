#include <stdio.h>
#define SIZE 5


float averageValue(int *arr, int size) {
    float sum = 0;
    if (size == 1) {
        return arr[0];
    }
    sum = averageValue(arr+1, size-1);

    return (sum * (size-1) + arr[0]) / size;
}


int main() {
    int array[SIZE] = {5, 2, 3, 4, 5};

    printf("\n%.2f", averageValue(array, SIZE));
    
    return 0;
}
