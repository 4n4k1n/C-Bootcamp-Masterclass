#include <stdio.h>

#define SIZE 5

int main() {
    int array[SIZE];
    int sum;
    int num1 = __INT_MAX__;
    int num2 = __INT_MAX__;


    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the array: ");
        scanf("%d", &array[i]);
    }

    for (int i=0; i<SIZE; i++) {
        if (num1 > array[i]) {
            num2 = num1;
            num1 = array[i];
        }
        else if (array[i] < num2) {
            num2 = array[i];
        }
    }
    printf("\nnum1 = %d", num1);


    printf("\nnum2 = %d", num2);

    sum = num1 + num2;
    printf("\nThe sum ofthe two smalest numbers inthe array is: %d", sum);

    return 0;
}
