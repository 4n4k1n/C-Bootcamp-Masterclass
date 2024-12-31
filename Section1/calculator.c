#include <stdio.h>

char choice;
float num1;
float num2;
float result;

int main () {

printf("Choose your operator(+ - * /): ");
scanf(" %c", &choice);

printf("Enter your first number: ");
scanf("%f", &num1);

printf("Enter your second number: ");
scanf("%f", &num2);


switch (choice) {
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
}

printf("Result: %f", result);

return 0;
}
