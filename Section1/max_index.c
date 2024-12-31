#include <stdio.h>

int num;
int arr[9];
int length = sizeof(arr)/sizeof(arr[0]);


int main () {
    printf("Enter a number: ");
    scanf("%d", &num);
    int max_index = arr[0];

    for (int i=length-1; i>=0; i--) {

        arr[i] = num%10;
        num /= 10;

    }

    for (int i=1; i<length; i++) {

        if (arr[i] > arr[max_index]) {

            max_index = i;

        }


    }
    printf("\nIndex of max number: %d", max_index);

    return 0;
}
