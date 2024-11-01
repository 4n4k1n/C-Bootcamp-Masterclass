#include <stdio.h>
#define SIZE 5


int oppositeSign(int *arr, int size) {

    if (size == 1) {
        return 1;
    }
    if (arr[size-1] * arr[size-2] >= 0) {
        return 0;
    }
    return oppositeSign(arr, size-1);

}


int main() {
    int array[SIZE] = {1, -2, 3, -4, 5};


    printf("\n%s", oppositeSign(array, SIZE) ? "True" : "False");


    return 0;
}