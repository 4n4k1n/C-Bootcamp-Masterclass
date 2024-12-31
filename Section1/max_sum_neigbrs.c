#include <stdio.h>

#define SIZE 6

int main() {
    int array[SIZE] = {10, 5, 4, 3, 2, 1};
    int max = array[0] + array[1];

    for (int i=1; i<(SIZE-1); i++) {
        if(max < array[i]+array[i+1]) {
            max = array[i]+array[i+1];
        }
    }
    printf("The sum of the max neighbors in the array is: %d", max);
    return 0;
}
