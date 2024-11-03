#include <stdio.h>
#include <stdlib.h>


void *myRealloc(void *arr, int old_size, int new_size) {

    char *new_array;
    new_array = (char*)malloc(new_size * sizeof(char));

    if (!new_array) return NULL;

    for (int i=0; i<old_size; i++) {
        new_array[i] = ((char*)arr)[i];
    }

    free(arr);
    return new_array;
}


int main() {
    int *arr;
    int size = 3;

    arr = (int*)malloc(size * sizeof(int));

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    arr = myRealloc(arr, size * sizeof(int), (size+2) * sizeof(int));

    arr[3] = 8;
    arr[4] = 9;

    for (int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}