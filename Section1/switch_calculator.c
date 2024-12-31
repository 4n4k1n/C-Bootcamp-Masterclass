#include <stdio.h>
#include <stdbool.h>

float num1;
float num2;
char operator;
float result;
bool correct = true;

int main () {

    printf("Enter your calculation: ");
    scanf("%f %c %f", &num1, &operator, &num2);

    while (getchar() != '\n');

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("You did something wrong!");
            correct = false;
    }
    if (correct == true) {
        printf("\n%.2f\n%c\n%.2f\n=\n%.2f\n", num1, operator, num2, result);
    }
    return 0;
}
