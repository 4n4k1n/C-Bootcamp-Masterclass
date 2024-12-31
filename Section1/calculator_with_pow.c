#include <stdio.h>

char operator;
float num1;
float num2;
float result;

int main () {

    printf("\nEnter the first number: ");
    scanf("%f", &num1);
    printf("\nEnter the operator (+-*/^): ");
    scanf(" %c", &operator);
    printf("\nEnter the second number: ");
    scanf("%f", &num2);


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
        case '^':
        result = num1;
            for (int i=0; i+1 < num2; i++) {
                result = result * 2;
            }
            break;
    }
    printf("Result: %f", result);
    return 0;
}
