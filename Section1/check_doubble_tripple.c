#include <stdio.h>

int num;

int main () {

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 99 && num < 1000) {
        printf("Its a tripple digit number.");
    }
    else if (num > 9 && num < 100) {
        printf("Its a double digit number.");
    }
    else if (num < 10) {
        printf("Its a single digit number.");
    }
    else {
        printf("Idk what it is.");
    }

    return 0;
}
