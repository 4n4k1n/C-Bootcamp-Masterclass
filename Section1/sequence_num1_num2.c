#include <stdio.h>

void returnSequence(int total, int num1, int num2) {
    printf("%d", num1);
    if (total > 1) {
        returnSequence(total-1, num1, num2);
    }
    printf("%d", num2);
}

int main() {
    int total, num1, num2;

    printf("Enter the total number: ");
    scanf("%d", &total);
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    returnSequence(total, num1, num2);

    return 0;
}
