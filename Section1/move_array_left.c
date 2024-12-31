#include <stdio.h>
#define SIZE 5

int main() {
    int array[SIZE];
    int n;
    int temp;

    printf("\nEnter the amount of index you want to move: ");
    scanf("%d", &n);

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }




    for (int i=0; i<SIZE; i++) {
        temp[i] = array[(i+n)%SIZE];
    }


    printf("\nArray moved left: ");
    for (int i=0; i<SIZE; i++) {
        printf("%d, ", array[i]);
    }

    return 0;
}
