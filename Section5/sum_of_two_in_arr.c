#include <stdio.h>
#define SIZE 6

int findSum(int *arr, int size, int num, int *idx1, int *idx2) {

    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            if ((i != j) && (arr[i] + arr[j] == num)) {
                
                *idx1 = i;
                *idx2 = j;
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6};
    int idx1 = -1;
    int idx2 = -1;
    int num = 10;

    printf("\n%d %s", num, findSum(array, SIZE, num, &idx1, &idx2) ? "True" : "False");
    printf("\n%d\n%d", array[idx1], array[idx2]);


    return 0;
}