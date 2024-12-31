#include <stdio.h>



int main () {
    int arr[5];
    int lenght = sizeof(arr)/sizeof(arr[0]);
    int good_n[lenght];
    int bad_n[lenght];

    for (int i=0; i<lenght; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<lenght; i++) {
        if (arr[i-1]*arr[i+1] == arr[i]) {
            int counter = 0;
            while (good_n[counter] != 0) {
                counter++;
            }
            good_n[counter] = arr[i];
        }
        else {
            int counter = 0;
            while (bad_n[counter != 0]) {
                counter++;
            }
            good_n[counter] = arr[i];
        }
    }
    printf("\nGood neighbors: ");
    for (int i=0; i<lenght; i++) {
        printf("%d ", good_n[i]);
    }
    printf("\nBad neighbors: ");
    for (int i=0; i<lenght; i++) {
        printf("%d ", bad_n[i]);
    }

    return 0;
}
