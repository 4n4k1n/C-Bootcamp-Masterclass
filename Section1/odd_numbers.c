#include <stdio.h>

int num;

int main () {

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Your number is even!");
    }
    else {
        printf("Your number is odd!");
    }

    return 0;
}
