#include <stdio.h>
#define SIZE 8


void countElements(int *arr, int size) {
    int count_element = 0;
    int allready_exists = 0;

    for (int i=0; i<size; i++) {
        allready_exists = 0;
        count_element = 0;
        

        for (int j=0; j<size; j++) {

            if (arr[i] == arr[j]) {

                if (j<i) {

                    allready_exists = 1;
                    break;
                }
                count_element++;
            }
        }
        if (!allready_exists) {
            printf("\nThe number %d exists %d times in the sequence.", arr[i], count_element);
        }
        
    }
    
}


int main() {
    int array[SIZE];

    for (int i=0; i<SIZE; i++) {
        printf("Enter a number for the sequence: ");
        scanf("%d", &array[i]);
    }

    countElements(array, SIZE);

    return 0;
}