#include <stdio.h>

#define SIZE 6

int main() {

    int array[SIZE] = {2, 2, 3, 3, 2, 1};
    int counter = 5;
    int pallindrome = 0;

    for (int i=0; i<SIZE; i++) {
        if (array[i] != array[counter]) {
            pallindrome = 1;
            break;
        }
        counter--;
    }
    if (pallindrome == 0) {
        printf("Its an pallindrome!");
    }
    else {
        printf("Its not an pallindrome!");
    }

    return 0;
}
