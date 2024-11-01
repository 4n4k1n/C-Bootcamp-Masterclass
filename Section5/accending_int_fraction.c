#include <stdio.h>
#define SIZE 3

    int accending(float *arr, int size) {

        if (size == 1) {
            return 1;
        }

        if (arr[0] < arr[1]) {
            if ((arr[0] - (int)arr[0]) > (arr[1] - (int)arr[1])) {
                return accending(arr+1, size-1);
            }
        }

        return 0;

    }



int main() {
    float array[SIZE] = {1.3, 2.2, 3.1};

    printf("\n%s", accending(array, SIZE) ? "Accending." : "Not accending.");

    return 0;
}