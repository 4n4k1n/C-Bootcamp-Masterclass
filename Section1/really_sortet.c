#include <stdio.h>
#include <stdbool.h>

#define SIZE 6

int main() {

    int array[SIZE] = {8, 2, 3, 4, 5, 6};
    bool sortet = true;

    for (int i=0; i<SIZE-1; i++) {
        if (array[i]> array[i+1]) {
            if (array[0]<array[SIZE-1]) {
                printf("\nIts sortet.");
            }
            else {
                printf("\nIts not sortet.");
            }
            sortet = false;
            break;
        }
    }
    if (sortet) {
        printf("\nIts really sortet.");
    }
    printf("\n");
    return 0;
}
