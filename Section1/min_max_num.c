#include <stdio.h>

float num1;
float num2;

int main () {

    printf("Enter number 1: ");
    scanf("%f", &num1);

    printf("Enter number 2: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("Number 1 (%.2f) is higher than number 2 (%.2f).", num1, num2);
    }
    else if (num1 < num2) {
        printf("Number 2 (%.2f) is higher than number 1 (%.2f).", num2, num1);
    }
    else {
        printf("The numbers are the same.");
    }
    return 0;
}
