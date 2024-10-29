#include <stdio.h>
#define SIZE 5


void reverseArray(char *arr, int size) {
    int counter = size-1;
    char temp;

    for (int i=0; i<size/2; i++) {
        temp = arr[i];
        arr[i] = arr[counter];
        arr[counter] = temp;
        counter--;
    }
}


void reverseArray(char *arr, int size) {
    int counter = size-1;
    char temp;

    for (int i=0; i<size/2; i++) {
        temp = arr[i];
        arr[i] = arr[counter];
        arr[counter] = temp;
        counter--;
    }
}



int main() {
    char array[SIZE];

    for (int i=0; i<SIZE; i++) {
        printf("Enter an char for the array: ");
        scanf(" %c", &array[i]);
    }

    reverseArray(array, SIZE);

    for (int i=0; i<SIZE; i++) {
        printf("%c ", array[i]);
    }





    return 0;
}
