#include <stdio.h>
#define SIZE 5


int maxSum(int *arr, int size) {
    int current_sum;
    int max_so_far;
    if (size==2) {
        return arr[0] + arr[1];
    }
    current_sum = arr[0] + arr[1];
    max_so_far = maxSum(arr+1, size-1);
    if (max_so_far>current_sum) {
        return max_so_far;
    }
    else {
        return current_sum;
    }
}


int main() {
    int array[SIZE] = {10, 2, 3, 4, 5};
    
    printf("The max sum of the array is: %d", maxSum(array, SIZE));







    return 0;
}